#include <stdio.h>
#include <string.h>

void bad(char *data) {
    char buffer[64];
    strcpy(buffer, data);
    puts(buffer);
}

int main(int argc, char **argv) {
    bad(argv[1]);
    return 0;
}