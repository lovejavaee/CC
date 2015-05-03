#include <stdio.h>
int main()
{
	int *p, a[5] = {1,2,3,4,5};
	printf("%lu\n", sizeof(a));
	p = a;
	/* p = &a[0];*/
	printf("0x%p\n", p);
	printf("%lu\n", sizeof p);
}
