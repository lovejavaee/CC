#include <stdio.h>
int main()
{
    // 'a' 'b' 'A'
    // "jack" == 'j' + 'a' + 'c' + 'k' + '\0
    char name[10] = "jack888\n";
//    printf(name);
    printf("jack888\n");
    
    char it[8] = "it";
    char it2[8] = {'i', 't', '\0'};
    
    char it3[8] = {'i', 't', '0'};
    
    // not normal string
    // char it4[8] = {'i', 't', '0', '0', '0', '0', '0', '0'...};
    char it4[8] = {'i', 't'};
    
    // none a string
    char it5[] = {'i', 't'};
    
    char ary[] = "array";
    int size = sizeof(ary);
    printf("%d\n",size);
    for (int i = 0; i < sizeof(ary); i++) {
        printf("%u-%s\n",ary[i],name);
        }
    printf("--------\n");
    
    char i[] = "it";
    char i2[] = {'o', 'k', '\0'};
    
    printf("%s\n", i2);
    printf("%d\n", i);
    printf("%d\n", i2);
    
    return 0;
}