#include <stdio.h>
int main()
{
	int a = 10, *ap;
	ap = &a;
	printf("a的地址:%p\n", ap);
	ap += 1;
	printf("a的地址:%p\n", ap);
	ap += 1;
	printf("a的地址:%p\n", ap);
	ap += 1;
	printf("a的地址:%p\n", ap);
	ap += 1;
	printf("a的地址:%p\n", ap);
	ap += 1;
	printf("a的地址:%p\n", ap);
	ap += 1;
	printf("a的地址:%p\n", ap);
	long int b = 11, *bp;
	bp = &b;
	bp += 1;
	printf("b的地址:%p\n", &b);
	printf("b的地址:%p\n", bp);
	bp += 1;
	printf("b的地址:%p\n", bp);
	int c = 10, *cp;
	cp = &c;
	printf("c的地址:%p\n", cp);
	cp += 1;
	printf("c的地址:%p\n", cp);
	char chr = 'A';
	printf("r的地址:%p\n", &chr);
	char chr1 = 'A';
	printf("r的地址:%p\n", &chr1);
}
