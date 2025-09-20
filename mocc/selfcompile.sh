#!/bin/bash

set -e

CC=${CC-cc}
STAGE=${STAGE-1}

MOCC=./mocc
if [ "$STAGE" -gt 1 ]; then
  MOCC="./riscvw ./self.$((STAGE-1))/mocc"
fi

outdir="self.$STAGE"

rm -rf "$outdir"
mkdir "$outdir"

echo "# preprocess"
for c in *.c; do
  echo cc -D__mocc_self__ -P -E "$c" -o "$outdir/${c%.c}.c"
  cc -D__mocc_self__ -P -E "$c" -o "$outdir/${c%.c}.c"
done

echo "# compile"
for c in "$outdir"/*.c; do
  echo "$MOCC" "$c" "> ${c%.c}.s"
  $MOCC "$c" > "${c%.c}.s"
done

echo "# link"
echo "riscv64-$RISCV_HOST-gcc" -static "$outdir"/*.s -o "$outdir"/mocc
"riscv64-$RISCV_HOST-gcc" -static "$outdir"/*.s -o "$outdir"/mocc
"riscv64-$RISCV_HOST-strip" "$outdir"/mocc
