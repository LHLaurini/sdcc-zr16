This is a slightly cleaned-up copy of the [zr16 sdcc port](https://github.com/barriquello/zr16/) by [Rafael Billig Tonetto](https://www.ufsm.br/app/uploads/sites/429/2018/11/TCC_Rafael_Billig_Tonetto.pdf), but with a complete commit history and support for building with `make`.

## Building

To build only the zr16 and mcs51 ports:

```sh
CXXFLAGS=-std=c++98 \
../configure --disable-device-lib \
             --disable-werror \
             --disable-z80-port \
             --disable-z180-port \
             --disable-r2k-port \
             --disable-r3ka-port \
             --disable-gbz80-port \
             --disable-tlcs90-port \
             --disable-ds390-port \
             --disable-ds400-port \
             --disable-pic14-port \
             --disable-pic16-port \
             --disable-hc08-port \
             --disable-s08-port \
             --disable-stm8-port
```

Note that the mcs51 port cannot be disabled, as the zr16 port depends on it. Flex and Bison are required, as well as the Boost library (version 1.84 and later will be dropping support for C++03, so an older version must be used).

## Caveats

- The generated code is sometimes poorly optimized;
- The assembler and linker steps are non-functional - use the assembler from the ZR16 SDK to generate the final binary;
- To access peripheral addresses, a definition such as `char IO[256];` must be added;
- There is no device library for the ZR16.
