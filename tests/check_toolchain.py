#!/usr/bin/env python3
"""Build and execute assembly, C, and multi-object programs inside MINUX9."""
import os
from pathlib import Path
import re
import subprocess
import sys
import tempfile

ROOT = Path(__file__).resolve().parent.parent
FIXTURES = ROOT / "tests" / "toolchain"
OUTPUT = ROOT / ".emu-test-toolchain.out"
COMMANDS = [
    "as -c tc_asm.s -o tc_asm.o",
    "ld -o tc_asm tc_asm.o",
    "tc_asm",
    "cc -S -o tc_hello.s tc_hello.c",
    "as -c tc_hello.s -o tc_hello.o",
    "ld -o tc_hello crt0.o tc_hello.o minux9.o",
    "tc_hello",
    "cc -S -o tc_main.s tc_main.c",
    "cc -S -o tc_func.s tc_func.c",
    "as -c tc_main.s -o tc_main.o",
    "as -c tc_func.s -o tc_func.o",
    "as -c tc_add.s -o tc_add.o",
    "ld -o tc_link crt0.o tc_main.o tc_func.o tc_add.o minux9.o",
    "tc_link",
    "ld -o tc_rev tc_func.o tc_main.o tc_add.o crt0.o minux9.o",
    "tc_rev",
]
EXPECTED = {
    "Hello World (ASM)": 1,
    "Hello World (C)": 1,
    "PASS module call": 2,
    "PASS ASM call": 2,
}


def main():
    emulator = Path(os.environ.get("RISCV_EMU", "./riscv-emu")).resolve()
    with tempfile.TemporaryDirectory(prefix="minux-toolchain-") as directory:
        stage = Path(directory)
        # mkfs reads the normal filesystem contents from its working directory.
        for source in ROOT.iterdir():
            if source.is_file() and source.suffix != ".img":
                (stage / source.name).symlink_to(source)
        fixtures = sorted(FIXTURES.iterdir())
        for source in fixtures:
            (stage / source.name).symlink_to(source)
        disk = ROOT / ".emu-test-toolchain.img"
        subprocess.run(
            [str(ROOT / "mkfs"), str(disk), *[p.name for p in fixtures]],
            cwd=stage, check=True,
        )
        with OUTPUT.open("w") as log:
            try:
                result = subprocess.run(
                    [str(emulator), "-i", str(ROOT / "kernel.elf"), "--mem", "512",
                     "--mmu", "sv39", "--disk", str(disk)],
                    input="\n".join(COMMANDS) + "\n", text=True,
                    stdout=log, stderr=subprocess.STDOUT,
                    timeout=int(os.environ.get("TOOLCHAIN_TEST_TIMEOUT", "120")),
                )
            except subprocess.TimeoutExpired:
                print(OUTPUT.read_text(errors="replace"))
                print("FAIL: toolchain test timed out", file=sys.stderr)
                return 1
        output = OUTPUT.read_text(errors="replace")
        markers = all(output.splitlines().count(line) == count
                      for line, count in EXPECTED.items())
        statuses = re.findall(r"^=> (-?\d+)\s*$", output, re.MULTILINE)
        if result.returncode or not markers or statuses != ["0"] * len(COMMANDS):
            print(output)
            print("FAIL: expected all commands to succeed and all programs to run",
                  file=sys.stderr)
            return 1
        for marker in EXPECTED:
            print("PASS:", marker)
        print(f"PASS test-toolchain ({OUTPUT.name})")
        return 0


if __name__ == "__main__":
    sys.exit(main())
