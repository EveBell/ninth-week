#include<stdio.h>
int main(){
	int a,b,c,t;//将三个数从大到小排列 
	printf("请输入3个数字");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
	t=a;
	a=b;
	b=t;
	}
	if(a<c)
	{
	t=c;
	c=a;
	a=t;
	}
	if(b<c)
	{
	t=b;
	b=c;
	c=b;
	}
	
	
	printf("%d%d%d",a,b,c);
} 
