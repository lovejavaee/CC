#include <stdio.h>

struct Student
    {
    	char   name[10];
    	char   number[8];
    	char   sex;
    	int    age;
    	double score;
    };

int main(int argc, char *argv[])
{
    struct Student LiMing = {"LiMing","SG11228",'M',23,98.5};
    struct Student * sp = &LiMing;   //�����ָ��ṹ���ָ��

    printf("%s\t%s\t%s\t%s\t%s\n","Name","Number","Age","Sex","Score");
    printf("---------------------------------------\n");
    printf("%s\t%s\t%d\t%c\t%.2f\n",LiMing.name,LiMing.number,LiMing.age,LiMing.sex,LiMing.score);
    printf("%s\t%s\t%d\t%c\t%.2f\n",(*sp).name,(*sp).number,(*sp).age,(*sp).sex,(*sp).score);
    printf("%s\t%s\t%d\t%c\t%.2f\n",sp->name,sp->number,sp->age,sp->sex,sp->score);     //���ַ��ʷ����ȼ�
    printf("%lu\n",sizeof(struct Student));
    //printf("Hello world!\n");
    return 0;
}
/*
ע�⣺���š� -> ��,��Ȼ����д���������ַ������ڴ˴�ȴ��ʾһ�����š�
*/
