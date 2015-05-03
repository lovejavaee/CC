#include <stdio.h>
int main()
{
    int count = 5;
    int ages[count];
    ages[0] = 10;
    ages[1] = 11;
    ages[2] = 18;
    
    // define array with initing, the number of members must be a const
    for (int i = 0; i < 5; i++) {
        printf("ages[%d]=%d\n", i, ages[i]);
    }
}