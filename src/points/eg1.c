#include <stdio.h>
int main()
{
	int a = 10;
	int *ap;
	ap = &a;
	printf("%p\n",ap);
	printf("%d\n",*ap);
	return 0;
}
