#include"head.h"
void main()
{
	int a;
	scanf("%d",&a);
	if((!(a%4)&&(a/100))||((!(a%4))&&(!(a%400))))
		printf("闰年");
	else
		printf("不是闰年");	
}