//辗转相除法
#include"head.h"
void main()
{
//	int x,y,r,a,b;
//	puts("请输入x和y");
//	scanf("%d %d",&x,&y);
///	a=x;
//	b=y;
//	if(x<y)
//		r=x,x=y,y=x;
//	r=x%y;
//	while(r)
//	{
//		x=y;
//		y=r;
//		r=x%y;
//	}
//	printf("最大公约数：%d 最小公倍数：%d\n",y,a*b/y);
	int x,y,r,a,b;
	scanf("%d%d",&x,&y);
	a=x;
	b=y;
	if(x>y)
		r=x,x=y,y=r;
	r=x%y;
	while(r)
	{
		x=y;
		y=r;
		r=x%y;
	}
	printf("%d %d",y,a*b/y);	

}