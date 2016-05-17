#include <stdio.h>
int main()

{
	double *p;
	char *c;
	printf("size of p is %d\n", sizeof(p));
	printf("size of p is %d\n", sizeof(c));
	printf("%d=%d,%d\n", *&p, &*p, p);
}
