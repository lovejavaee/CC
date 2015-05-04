#include <stdio.h>
struct Student
{
	char name[10];
	char number[8];
	char sex;
	int age;
	double score;
	struct Student *next;
};
int main(int argc, char *argv[])
{
	struct Student LiMing = {"LiMing", "SG11228", 'M', 23, 98.5, NULL};
	struct Student XiaoLi= {"XiaoLi", "SG11228", 'F', 22, 90, NULL};
	struct Student *sp = &LiMing;
	LiMing.next =&XiaoLi;

	printf("%s\t%s\t%s\t%s\t%s\n","Name","Number","Age","Sex","Score5");
	printf("-------------------------------------------\n");
	printf("%s\t%s\t%d\t%c\t%.2f\n",sp->name, sp->number, sp->age, sp->sex, sp->score);
	printf("%s\t%s\t%d\t%c\t%.2f\n",sp->next->name, sp->next->number, sp->next->age, sp->next->sex, sp->next->score);

	sp = sp->next;
	printf("%s\t%s\t%d\t%c\t%.2f\n",sp->name, sp->number, sp->age, sp->sex, sp->score);
	return 0;
}
