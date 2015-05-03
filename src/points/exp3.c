#include <stdio.h>
int main()
{
	int a[] = {1,2,3,99,23};
	int *ap, *bp;
	ap = &a[2];
	bp = ap + 1;
	printf("%d\t%d\t%d\n", *ap, *ap+1, *bp);
	return 0;
}
