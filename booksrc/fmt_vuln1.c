// Credit: Wenliang Du
#include <stdio.h>

void badfunction() {
    char input[100];
    int var = 0x11223344;

    printf("Target address: %x\n", (unsigned) &var);
    printf("Data var at target address before: 0x%x\n", var);

    printf("Please enter a string: ");
    fgets(input, sizeof(input)-1, stdin);

    printf("you entered: \n");
    printf(input);

    printf("var @ 0x%08x = %x\n", &var, var);
}

int main() {
    int mainvar = 0x44332211;
    printf("mainvar address: %x\n", (unsigned) &mainvar);
    printf("Data at main var before: 0x%x\n", mainvar);
    badfunction();
    printf("%s", "good bye!\n");
    printf("Data at mainvar after: 0x%x\n", mainvar);
    return 0;
}