//
//  Hello.c
//  learning_c
//
//  Created by willson on 5/2/15.
//  Copyright (c) 2015 willson. All rights reserved.
//

#include "Hello.h"
#include <stdio.h>

int main_test(int argc, const char * argv[]) {
    // insert code here...
    //    printf("Hello, World!\n");
    int i;
    for (i = 0; i < 10; i++) {
        printf("Hello, World!\t%d\n",i);
    }
    return 0;
}
