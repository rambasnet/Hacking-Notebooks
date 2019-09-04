// Credit: Wenliang Du
#include <stdio.h>

void badfunction(char * data) {
    char input[100];
    int var = 0x11223344;

    printf("Target address: %x\n", (unsigned) &var);
    printf("Data var at target address before: 0x%x\n", var);
    strcpy(input, data);
    register int ebp asm("ebp");
    printf("%x\n", ebp+4);
    printf("you entered: \n");
    printf(data);

    printf("\nvar @ 0x%08x = %x\n", &var, var);
}

int main(int argc, char* argv[]) {
    int mainvar = 0x44332211;
    printf("mainvar address: %x\n", (unsigned) &mainvar);
    printf("Data at main var before: 0x%x\n", mainvar);
    badfunction(argv[1]);
    printf("%s", "good bye!\n");
    printf("Data at mainvar after: 0x%x\n", mainvar);
    return 0;
}