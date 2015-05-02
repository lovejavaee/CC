//
//  debug_01.c
//  learning_c
//
//  Created by willson on 5/2/15.
//  Copyright (c) 2015 willson. All rights reserved.
//

#include "debug_01.h"
int main_test01(int argc, const char * argv[])
{
    int i, n;
    
    if (fscanf(stdin, "%d", &n) == 1)
    {
        for (i = 0; i < n; i++)
        {
            printf("Hello, World!\n");
        }
    }
    return 0;
}