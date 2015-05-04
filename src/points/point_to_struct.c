#include <stdio.h>
#include <stdlib.h>
#define NUM 3

struct Student
{
	char   name[10];
	char   number[10];
	double score;
};

int main(int argc, char *argv[])
{
    struct Student class1[NUM];
    struct Student * sp = class1;
    char tmp[10];
    for (int i=0; i<NUM; i++)
    {
    	printf("Input name %d:",i+1);
    	gets(sp->name);
    	printf("Input number %d:",i+1);
    	gets(sp->number);
    	printf("Input score %d:",i+1);
    	sp->score = atof(gets(tmp));
    	sp++;
    }

    sp = class1;
    printf("\n%s\t%s\t%s\n","Name","Number","Score");
    printf("-----------------------\n");
    for (int i=0; i<NUM; i++)
    {
    	printf("%s\t%s\t%.2f\n",sp->name,sp->number,sp->score);
    	sp++;
    }
    return 0;
}
