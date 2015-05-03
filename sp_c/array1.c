#include <stdio.h>
int main()
{
    //define : type array name[member number];
    
    int ages[50] = {192,34,465,76,68,8,97};
    ages[1] = 32;
    
    //enum
    
    for (int i = 0; i < sizeof(ages); i++) {
        // ages[i];
        printf("ages[%d]=%d\n",i, ages[i]);
         }
        return 0;
}