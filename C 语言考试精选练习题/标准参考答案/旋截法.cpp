#include"head.h"
float find(float x,float y,float (*p)(float))
{
	float k,f;
	do
	{
    	k=(x*(*p)(y)-y*(*p)(x))/((*p)(y)-(*p)(x));
	    f=(*p)(k);
		if(f*(*p)(x)>0)
			x=k;
		else
			y=k;
	}while(fabs(f)>=1e-5);
	return 	k;
}
void main()
{
	float check(float);
	float (*p)(float);
	float a,b,flag=1,c,d;
	float k;
	p=check;
	while(flag)
	{
	  puts("�������һ�����һ����");
	  scanf("%f %f",&a,&b);
	  c=(*p)(a);
	  d=(*p)(b);
	  if(c*d<0)
		  flag=0;
	}
	k=find(a,b,p);
	printf("%f ",k);
}	
float check(float a)
{
	float f;
	f=a*a*a*2-4*a*a+3*a-6;
	return f;
}
