//矩形法
#include"head.h"
void main()
{
	float fsin(float);	
	float count(float a,float b,int n,float (*p)(float));
	float a,b;
	int n;
	puts("请输入上线和下线和分数");
	scanf("%f %f %d",&a,&b,&n);
	printf("%f",count(a,b,n,fsin));
}
float count(float a,float b,int n,float (*p)(float))
{
	int i;
	float sum=0;
	for(i=1;i<=n;i++)
	{
		sum+=(*p)(a+((b-a)/n)*i)*(b-a)/n;
	}
	return sum;
}
float fsin(float a)
{
	float f;
	return f=sin(a);
}