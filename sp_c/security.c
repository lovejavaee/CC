//
//  security.c
//
//
//  Created by willson on 4/25/15.
//
//

#include "security.h"

main()
int key;
char mingma,mima;
printf("\n Please input the character:");
getch();
scanf("%c",&mingma);
printf("\n Please input the key:");
getch();
scanf("%d",&key);
if((mingma>='A')&&(mingma<='Z'))
mima='A'+(mingma-'A'+key)%26;
if((mingma>='a')&&(mingma<='z'))
mima='a'+(mingma-'a'+key)%26;
printf("\n The output is:%c",mima);
getch();