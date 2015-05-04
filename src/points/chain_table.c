#include <stdio.h>
#include <stdlib.h>

struct Student
{
	char name[16];
	char number[8];
	double score;
	struct Student * next;
};

void PrintList(struct Student * p)
{
    while(p != NULL)
    {
        printf("%s\t%s\t%.2f\n",p->name, p->number, p->score);
        p = p->next;
    }
}

int main(int argc, char *argv[])
{
    struct Student LiMing = {"LiMing", "SA12345", 88, NULL};
    struct Student LiLi = {"LiLi", "SA12346", 95, NULL};
    struct Student Aaron = {"Aaron", "SA12347", 99, NULL};

    struct Student * head = &LiMing;
    LiMing.next = &LiLi;
    LiLi.next = &Aaron;

    PrintList(head);

    return 0;
}
