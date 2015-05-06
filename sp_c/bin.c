#include <stdio.h>


void printBinary(int number)
{
    int tmp = (sizeof(number)<<3) -1;
    
    while (tmp>=0) {
        int value = number>>tmp & 1;
        printf("%d", value);
        tmp--;
        
        if ((tmp+1)%4==0) {
            printf(" ");
        }
    }
    printf("\n");
  
}
int main()
{
    printBinary(-10);
    return 0;
}