#include"head.h"
void main()
{
	int n,i;
	puts("请输入数据");
	scanf("%d",&n);
	for(i=2;i<=(int)(sqrt(n));i++)
	{
		if(!(n%2))
		{
			printf("不是素数");
		    break;
		}
	}
    printf("是素数");
}