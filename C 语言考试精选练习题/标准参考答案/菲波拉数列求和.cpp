#include"head.h"
void main()
{
	int a,b,c,count,i=3,sum=0;
	a=1;
	b=1;
	c=a+b;
	puts("������Ҫ��Ĵ���ֵ,�����3");
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

		

