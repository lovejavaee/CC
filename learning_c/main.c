//
//  main.c
//  learning_c
//
//  Created by willson on 5/2/15.
//  Copyright (c) 2015 willson. All rights reserved.
//  function main

#include "main.h"

    int i_am_a_global_variable = 999;
    
    /* function */
    void another_function(int* a)
    {
        (*a)++;
        i_am_a_global_variable += *a;
        return;
    }
    int some_function(int a)
    {
        int some_local_var = 0;
        printf("some_local_var has been changed to %d\n", some_local_var);
        another_function(&some_local_var);
        printf("some_lcoal_var has been changed to %d\n", some_local_var);
        return 0;
    }

    int main(int argc, const char * argv[]) {
    int number;
    if (fscanf(stdin, "%d", &number) ==1) {
        some_function(number);
        printf("You've entered %d\n", number);
    } else{
        printf("No number entered. Bye. \n");
    }
    return 0;
}
