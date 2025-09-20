# mocc

[低レイヤを知りたい人のためのCコンパイラ作成入門][compilerbook]に則って作ったRISC-V向けCコンパイラ。

製作記は: [自作したRISC-V向けCコンパイラでセルフホストまでこぎつけた - 詩と創作・思索のひろば](https://motemen.hatenablog.com/entry/2022/11/compilerbook-riscv)

## 未実装の機能

* プリプロセッサ
* 関数ポインタ
* 型キャスト
* goto
* 他多数

## example

    ./riscvw ./mocc-stage3.riscv ./example/8queen.c > 8queen.c.s
    riscv64-unknown-elf-gcc -static 8queen.c.s -o 8queen.riscv
    ./riscvw 8queen.riscv

[compilerbook]: https://www.sigbus.info/compilerbook
