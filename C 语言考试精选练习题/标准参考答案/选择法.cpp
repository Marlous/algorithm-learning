#include<stdio.h>
#include<string.h>
#define N 10 
void main()
{
	int a[N];
	int i=0,j,k,d;
	for(i=0;i<N;i++)
		scanf("%d",a+i);
	for(i=0;i<=N-2;i++)
	{
		k=i;
		for(j=i+1;j<=N-1;j++)
		{
			if(a[k]<a[j]) k=j;
			else
				;
		}
		if(k!=i)
			d=a[k],a[k]=a[i],a[i]=d;
	}
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
}