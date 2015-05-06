#include <stdio.h>
 int main()
{
    int a =10;
    int b =11;
    a = b - a;
    b = b - a;
    a = b + a;
    printf("a=%d, b=%d\n", a, b);
    return 0;
}