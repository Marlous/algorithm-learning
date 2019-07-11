#include"head.h"
void main()
{
	int check(int);
	int (*p)(int);
	int a,b,i,flag=0;
	p=check;
	puts("请输入第一和最后一个数");
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		flag=(*p)(i);
		if(flag)
		{
			printf("%d ",i);
		}
		else
			;
	}
}	
int check(int a)
{
	int i=1;
	for(i=1;i<=(int)(sqrt(a));i++)
	{
		if(a==i*i)
			return 1;
	}
		return 0;
}
