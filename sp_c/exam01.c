#include <stdio.h>
int main()
{
    int a = 10;
    int b = 11;
    
    int tmp = a;
    a = b;
    b = tmp;
    
    printf("a=%d, b=%d\n",a,b);
}