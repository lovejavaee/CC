#include <stdio.h>
int main()
{
	int a, *ap, *bp;
	a = 305419854;
	ap = &a;
	bp = ap;
	printf("%d\t%d\t%d\n",a, *ap, *bp);
	return 0;
}
