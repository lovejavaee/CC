#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int a = 0; // 全局初始化区
char *p1; // 全局未初始化区
 int main()
 {
	int b; // 栈区
	char s[] = "abc";// 栈区
	char * p2;//  栈区
	char * p3 = "12345xyz";//"12345xyz"//  在文字常量区, p3 在栈区
	static int c = 0; // 全局（静态）初始化区
	p1 = (char *)malloc(10);
	p2 = (char *)malloc(20);// 堆区
	strcpy(p1, p3);
	return 0;
 }	
