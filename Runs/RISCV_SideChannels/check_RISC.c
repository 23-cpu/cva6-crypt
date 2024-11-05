/* A simple RISC-V code to check access times in cache */

#include<stdio.h>
#include<stdint.h>
#include<string.h>

#define BUFF_SIZE 8

char buffer[BUFF_SIZE];

uint64_t read_cycle(){
	uint64_t cycle;
	asm volatile("rdcycle %0" : "=r" (cycle));
	return cycle;
}

void flush_cache(char *addr){
	asm volatile ("fence");
	asm volatile ("sfence.vma zero, %0":: "r"(addr));
	asm volatile ("fence");
}


