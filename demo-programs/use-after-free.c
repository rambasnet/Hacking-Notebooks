#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* hello() {
    char *str = (char* )malloc(200);
    strncpy(str, "Hello World!\0", 13);
    //strcpy(result, str);
    printf("inside function %s\n", str);
    //free(str);
    return str;
}

int main() {
    char *r; //[200];
    r = hello();
    //printf("%s", r);
    //free(r);
    printf("r points to: %s", r);
    char * cp = r;
    free(cp);
    printf("r points to: %s", r);
    return 0;
}