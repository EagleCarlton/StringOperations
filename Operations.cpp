// ConsoleApplication9.cpp : 定义控制台应用程序的入口点。
//字符串操作
#include "stdafx.h"
#include "stdio.h"
#include "string.h"
#include "userstring.h"
int main()
{
	char a[10];
	strcpy_s(a, "work");
	printf("%s", a);
	printf("%d\n", strlen(a)); 
	printf("%s\n",strcpy_s(a, "study"));
	printf("%d\n", strlen(a));
	printf("%s\n", strcat_s(a, "hard"));
	printf("%d\n", strcmp(a, "studyhard"));
	printf("%s\n", _strupr_s(a));
	Strcpy(a, "work");
	printf("%d\n", Strlen(a));
	printf("%s\n", Strcpy(a, "study"));
	printf("%s\n", Strcat(a, "hard"));
	printf("%d\n", Strcmp(a, "studyhard"));
	printf("%s\n", Strupr(a));
	char b[20] = "workstudyhard", b1[6];
	printf("%s\n", Substr(b, 4, 5, b1));//取子串
	printf("%s\n", Strinsert(b, 4, b1));//子串插入
	printf("%s\n", Strerase(b, 4, 5));//子串删除
	char c = 'k';
	printf("%d\n", Chfind(b, c, 0));//字符查找
	printf("%d\n", Findpat(b, "dy", 0));
    return 0;
}
