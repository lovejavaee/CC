//
//  HelloWorld.c
//
//
//  Created by willson on 4/24/15.
//
//

#include <stdio.h>

int play()
{
    printf("play!\n");
    return 0;
}
int main()
{
    printf("HelloWorldello, World!\n");
    play();
    puts("Hello!");
    static int c = 30;
    int a = 10;
    int b = 20;
    int d = 30;
    char e = 'a';
    char f = 'a';
    printf("a的地址：%p\n", &a);
    printf("b的地址：%p\n", &b);
    printf("c的地址：%p\n", &c);
    printf("d的地址：%p\n", &d);
    printf("e的地址：%p\n", &e);
    printf("f的地址：%p\n", &f);
    
    //float
    float f1 = 2.345;
    printf("f1's value is %.2f\n",f1);
    printf("f1's address is %p\n",&f1);
    printf("f1's address is %p\n",&f1);
    return 0;
}