#define _POSIX_C_SOURCE 200112L
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    setenv("FULLNAME", "Abdul--------------------Majid Nuhu", 1);
    printf("Your full name is %s\n", getenv("FULLNAME"));
    return 0;
}