#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int input = 0;
	printf("加入软件学院：>");
	printf("那要好好学习吗(1/0)？>:");
	scanf("%d", &input);
	if (input == 1)
	
		printf("年薪百万");
	
	else
		printf("烤红薯去吧");
	
	return 0;
}