#include <stdio.h>
#include <stdlib.h>

struct Student
{
	char name[16];
	char number[8];
	double score;
	struct Student * next;
};

struct Student * CreatList(void)
{
    struct Student * p = NULL, * ins = NULL;
    while (1)
    {
    	printf("Press \"I\" to insert a node, any other key to finish insertion:");
    	if (getchar() != 'I')
    		return p;
    	fflush(stdin);

    	if ((ins = (struct Student *)malloc(sizeof(struct Student))) == NULL)
    	{
    	    printf("malloc error,exit...");
            exit(EXIT_FAILURE);
    	}

    	printf("Input the name:");
    	gets(ins->name);
    	printf("Input the Number:");
    	gets(ins->number);
    	printf("input the score:");
    	scanf("%lf",&(ins->score));fflush(stdin);

    	ins->next = p;
    	p = ins;
    }
}

void PrintList(struct Student * p)
{
    printf("\n\n%s\t%s\t%s\n","Name", "Number", "Score");
    printf("-------------------------\n");
    while (p)
    {
    	printf("%s\t%s\t%.2f\n",p->name, p->number, p->score);
    	p = p->next;
    }
}

int main(int argc, char *argv[])
{
    struct Student * head;
    head = CreatList();
    PrintList(head);
    //printf("Hello world!\n");
    return 0;
}
