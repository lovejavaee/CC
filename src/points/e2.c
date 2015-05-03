#include <stdio.h>
int main()
{

	int a[5], i;
	printf("input 5 numbers:\n");
	for(i=0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0; i <= 5; i++)
	{

		printf("%d\t", a[i]);
	}
	putchar('\n');
	return 0;
}
