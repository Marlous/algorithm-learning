#include"head.h"
float find(float y,float (*p)(float),float (*q)(float))
{
//	float k;
//	do
//	{
//		k=y;
//    	y=k-(*p)(k)/(*q)(k);
//	}while(fabs(k-y)>=1e-5);
//	return 	y;
	float k;
	do
	{
		k=y;
		y=k-(*p)(k)/(*q)(k);
	}while(fabs(k-y)>=1e-5);
	return y;
}
void main()
{
	float check(float);
	float (*p)(float);
	float check1(float a);
	float (*q)(float);
	float b,flag=1;
	float k;
	p=check;
	q=check1;
	puts("请输入一个数");
    scanf("%f",&b);
	k=find(b,p,q);
	printf("%f ",k);
}	
float check(float a)
{
	float f;
	f=a*a*a*2-4*a*a+3*a-6;
	return f;
}
float check1(float a)
{
	float f;
	f=6*a*a-8*a+3;
	return f;
}