#include<stdio.h>
int main()
{
	int a;
	printf("请输入一个年份"); 
	scanf("%d",&a);
	if((a%4==0&&a%100!=0) || a%400==0)
	{
		printf("是闰年"); 
	}
	else
	printf("不是闰年");
 } 
