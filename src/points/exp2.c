#include <stdio.h>
int main()
{
	int a, *ap;
	char *bp;
	a = 305419854;
	ap = &a;
	bp = (char *)ap;
	printf("%d\t 0x%x\t%c\n",a, *ap, *bp);
	return 0;
}
