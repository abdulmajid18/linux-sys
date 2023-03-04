#include <string.h>
#include <stdio.h>
// #define _XOPEN_SOURCE = 700
// #define _POSIX_C_SOURCE >= 200809L

int main(void)
{
    char a[] = "Helllo";
    char *b;

    b = strdup(a);
    printf("b= %s\n", b);
    return 0;
}