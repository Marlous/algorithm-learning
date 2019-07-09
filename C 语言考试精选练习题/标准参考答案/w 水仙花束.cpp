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
	int d,b,c;
	b=a/100;
	c=a/10-b*10;
	d=a%10;
	if(b*b*b+c*c*c+d*d*d==a)
		return 1;
	else
		return 0;
}
