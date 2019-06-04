#include"head.h"
void main()
{
	int a[101],i,j;
	for(i=1;i<=100;i++)
		a[i]=i;
	a[1]=0;
	for(i=2;i<=99;i++)
		for(j=i+1;j<=100;j++)
				if((a[i]!=0)&&(a[j]!=0))
					if(a[j]%a[i]==0)
						a[j]=0;

	for(i=2;i<=100;i++)
		if(a[i]!=0)
			printf("%d ",a[i]);
}