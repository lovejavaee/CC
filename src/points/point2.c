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
    struct Student * sp = &LiMing;   //这就是指向结构体的指针

    printf("%s\t%s\t%s\t%s\t%s\n","Name","Number","Age","Sex","Score");
    printf("---------------------------------------\n");
    printf("%s\t%s\t%d\t%c\t%.2f\n",LiMing.name,LiMing.number,LiMing.age,LiMing.sex,LiMing.score);
    printf("%s\t%s\t%d\t%c\t%.2f\n",(*sp).name,(*sp).number,(*sp).age,(*sp).sex,(*sp).score);
    printf("%s\t%s\t%d\t%c\t%.2f\n",sp->name,sp->number,sp->age,sp->sex,sp->score);     //三种访问方法等价
    printf("%lu\n",sizeof(struct Student));
    //printf("Hello world!\n");
    return 0;
}
/*
注意：符号“ -> ”,虽然在书写上是两个字符，但在此处却表示一个符号。
*/
