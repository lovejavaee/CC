#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i = *((int *)NULL);
    printf("%d\n", i);
    return 0;
}
