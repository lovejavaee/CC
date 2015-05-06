#include <stdio.h>
int main()
{
    char c= '+';
    int a = 10;
    int b = 20;
    switch(c){
        case  '+':
        {
            int sum = a + b;
            printf("sum is%d\n", sum);
            break;
        }
        case   '-':
        {
            int minus = a - b;
            printf("minus is%d\n",minus);
            break;
        }
    }
    return 0;
}