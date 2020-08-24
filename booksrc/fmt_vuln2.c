#include <stdio.h>
#include <string.h>

void badfunction(char *data) {
    char input[200];
    //printf("Enter your name: ");
    // scanf gives segfault
    //scanf("%s", input);
    // fgets doesn't work!
    //fgets(input, sizeof(input)-1, stdin);
    strcpy(input, data);
    printf("Hello, ");
    printf(input);
    printf("\ninput is @ 0x%08x\n", &input);
    register int ebp asm("ebp");
    printf("return address @ 0x%08x\n", (ebp+4));
    // would be be nice to be able to print value at return add
}

int main(int argc, char* argv[]) {
    if (argc == 1) {
        printf("Usage: %s name\n", argv[0]);
        exit(0);
    }
    badfunction(argv[1]);
    printf("%s\n", "good bye!");
    return 0;
}