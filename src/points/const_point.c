#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a = 10;
    int const * pa = &a;
    *pa = 2;
    printf("Hello world!\n");
    return 0;
}
