#include<stdio.h>
#include<string.h>
#define N 5
int main()
{
	int a[N],sum=0,sum1=1,i;
	for(i=0;i<N;i++)
		scanf("%d",a+i);
	for(i=0;i<N;i++)
	sum+=a[i];
	for(i=0;i<N;i++)
		sum1*=a[i];
	printf("%d %d ",sum,sum1);
}
