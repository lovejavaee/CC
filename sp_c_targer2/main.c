//
//  main.c
//  sp_c_targer2
//
//  Created by willson on 5/3/15.
//  Copyright (c) 2015 willson. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a[] = {1,2,3,99,23};
    int *ap, *bp;
 // char *cp;
    ap = &a[2];
    bp = ap + 1;
 // cp = ap + 1;
    printf("%d\t%d\t%d\n", *ap, *ap+1, *bp);
    return 0;
}

