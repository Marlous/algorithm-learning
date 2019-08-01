#include"head.h"
void main()
{
	int a,b,c,count,i=3,sum=0;
	a=1;
	b=1;
	c=a+b;
	puts("请输入要求的次数值,请大于3");
	scanf("%d",&count);
	sum=a+b+c;
	while(i<count)
	{
		a=b;
		b=c; 
		c=a+b;
		sum+=c;
		i++;
	}
	printf("sum=%d",sum);
}

		

