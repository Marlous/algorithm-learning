#include<stdio.h>
#include<string.h>
#include<math.h>
int check(int n);
void check1(int n);
void check2(int n);
int main()
{
	int m;
	puts("ÇëÊäÈëÊı");
	scanf("%d",&m);
	if(m%2) check2(m);
	else check1(m);
}
void check1(int n)
{
	int i,j;
	for(i=2;i<=n-1;i++)
		for(j=i;j<=n-1;j++)
		{
			if((i+j==n)&&check(i)&&check(j))
				printf("%d %d\n",i,j);
		}
}
void check2(int n)
{
	int i,j,k;
	for(i=2;i<=n-1;i++)
		for(j=i;j<=n-1;j++)
			for(k=i;k<=n-1;k++)
				if((i+j+k==n)&&check(i)&&check(j)&&(check(k)))
				printf("%d %d %d\n",i,j,k);

}
int check(int n)
{
	int i;
	if(n%2==0)
		return 0;
	else
	{
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
}
