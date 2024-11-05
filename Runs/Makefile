#makefile for the simple C program

CC-X86 = gcc
CFLAGS-X86 = -g
CC-RISCV = riscv64-unknown-elf-gcc
CFLAGS-RISCV = -g
RM = rm -f

default: all
all: hello-x86 hello-riscv


hello-x86:
	$(CC-X86) $(CFLAGS-X86) -o hello-x86 hello.c

hello-riscv:
	$(CC-RISCV) $(CFLAGS-RISCV) -o hello-riscv hello.c
