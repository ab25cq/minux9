ARG VARIANT="jammy"
FROM mcr.microsoft.com/vscode/devcontainers/base:0-${VARIANT}

RUN apt-get update && \
    apt-get install -y autoconf automake autotools-dev curl libmpc-dev libmpfr-dev libgmp-dev libusb-1.0-0-dev gawk build-essential bison flex texinfo gperf libtool patchutils bc zlib1g-dev device-tree-compiler pkg-config libexpat-dev libnewlib-dev

ENV RISCV /opt/riscv
ENV RISCV_HOST unknown-elf
ENV PATH $RISCV/bin:$PATH

WORKDIR /opt/src

RUN git clone --depth=1 https://github.com/riscv-collab/riscv-gnu-toolchain.git && \
    cd riscv-gnu-toolchain && \
    git submodule init && \
    { git submodule update --depth=1 || git submodule foreach 'git fetch --depth=1 origin $(git config -f ../.gitmodules submodule.$sm_path.branch) && git reset --hard FETCH_HEAD'; }

RUN cd riscv-gnu-toolchain && \
    ./configure --prefix=$RISCV --with-arch=rv64gc_zfencei && \
    make -j $(nproc)

RUN git clone --depth 1 https://github.com/riscv-software-src/riscv-isa-sim.git && \
    cd riscv-isa-sim && \
    mkdir build && \
    cd build && \
    ../configure --prefix=$RISCV && \
    make -j $(nproc) && \
    make install

RUN git clone --depth=1 https://github.com/riscv-software-src/riscv-pk.git && \
    cd riscv-pk && \
    mkdir build && \
    cd build && \
    ../configure --prefix=$RISCV --host=riscv64-$RISCV_HOST && \
    make -j $(nproc) && \
    make install

RUN cd .. && rm -rf src

RUN apt-get update && \
    apt-get install -y clang-12 clangd-12 && \
    update-alternatives --install /usr/bin/clangd clangd /usr/bin/clangd-12 100 && \
    update-alternatives --install /usr/bin/cc cc /usr/bin/clang-12 100
