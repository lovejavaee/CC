#include <stdio.h>
int main()
{

	int a[5],*idx;
	printf("array a'address is %p\n", &a);
	printf("point idx'address is %p\n", &idx);
	printf("the first member of the array is %p\n", &a[0]);
	printf("input 5 numbers:\n");
	for(int i=0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	//	putchar('\n');
	idx = a;	// idx = &a[0];
	printf("array a'address is %p\n", &a);
	printf("point idx'address is %p\n", &idx);
	printf("the first member of the array is %p\n", &a[0]);
	putchar('\n');
	for(int i=0; i <= 5; i++)
	{

		printf("%d\t", *(idx + i));
	}
	putchar('\n');
	return 0;
}
