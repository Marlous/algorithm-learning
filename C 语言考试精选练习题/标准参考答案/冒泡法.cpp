#include<stdio.h>
#include<string.h>
#define N 10
void main()
{
	int a[N];
	int i=0,j,d;
	for(i=0;i<N;i++)
		scanf("%d",a+i);
	for(i=0;i<N-1;i++)
	{
		for(j=0;j<N-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				d=a[j];
				a[j]=a[j+1];
				a[j+1]=d;
			}
		}
	}
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
}
