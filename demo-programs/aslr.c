// aslr.c - program to check address space layout randomization
// compile and run the program multiple times
// if you see same value for $esp, ASLR is disabled
// $ gcc -g -m 32 -o aslr aslr.c
#include <stdio.h>

int main() {
    register int esp asm("esp");
    printf("$esp = %p\n", esp);
    return 0;
}