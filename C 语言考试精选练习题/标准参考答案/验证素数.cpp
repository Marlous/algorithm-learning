#include"head.h"
void main()
{
	int n,i;
	puts("����������");
	scanf("%d",&n);
	for(i=2;i<=(int)(sqrt(n));i++)
	{
		if(!(n%2))
		{
			printf("��������");
		    break;
		}
	}
    printf("������");
}