//շת�����
#include"head.h"
void main()
{
//	int x,y,r,a,b;
//	puts("������x��y");
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
//	printf("���Լ����%d ��С��������%d\n",y,a*b/y);
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