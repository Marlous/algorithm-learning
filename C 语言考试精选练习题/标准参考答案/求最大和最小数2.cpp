#include"head.h"
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("max=%d",a>b?a:b);
	putchar(10);
   	printf("min=%d",!(a>b)?a:b);
}

