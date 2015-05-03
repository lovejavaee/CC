#include <stdio.h>
int main()
{
	int a[] = {3,4,55,32,45}, i, *idx;
	for(i=0; i < 5; i++)
	{
		printf("%d\t", *(a+i));
	}
	printf("\n");
	idx = a;
	for(i=0; i < 5; i++)
	{
		printf("%d\t", idx[i]);
	}
	printf("\n");
	for(i=0; i < 5; i++)
	{
		printf("%d\t", *(a+i));
	}
	printf("\n");
	for(i=0; i < 5; i++)
	{
		printf("%d\t", *(idx+i));
	}
	printf("\n");
//	printf(&3[a]);
	printf("\n");
}
