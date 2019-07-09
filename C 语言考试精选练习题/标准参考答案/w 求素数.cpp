#include"head.h"
void main()
{
	int check(int n);
	int n,m,flag,i;
	puts("ÇëÊäÈëÇø¼ä");
	scanf("%d %d",&n,&m);
	for(i=n;i<=m;i++)
	{
		flag=check(i);
		if(flag==1)
			printf("%d ",i);
		flag=0;
	}
}
int check(int n)
{
	int i;
	for(i=2;i<=(int)(sqrt(n));i++)
	{
		if(!(n%i))
		{
			return 0;
		    break;
		}
	}
    return 1;
}