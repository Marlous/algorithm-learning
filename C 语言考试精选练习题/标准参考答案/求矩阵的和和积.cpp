#include<stdio.h>
#include<string.h>
#define N 3
#define M 3
void main()
{
	int a[N][M],b[N][M],C[N][M]={0},D[N][M]={0};
	int i=0,j=0,sum=0,k;
	puts("注意矩阵和与积的要求");
	puts("请输入第一个矩阵");
    for(i=0;i<N;i++)
		for(j=0;j<M;j++)
			scanf("%d",a[i]+j);
	puts("请输入第二个矩阵");
    for(i=0;i<N;i++)
		for(j=0;j<M;j++)
			scanf("%d",b[i]+j); //输入可以合并到一起
	puts("开始计算和");
	for(i=0;i<N;i++)
		for(j=0;j<M;j++)
			C[i][j]=a[i][j]+b[i][j];
	puts("开始计算积");
	for(i=0;i<N;i++)
		for(j=0;j<M;j++)
		{
			sum=0;
			for(k=0;k<M;k++)
				sum+=a[i][k]*b[k][j];

			D[i][j]=sum;
		}
    for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
			printf("%d ",*(C[i]+j));
		putchar(10);
	}
		putchar(10);
    for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
			printf("%d ",*(D[i]+j));
		putchar(10);
	}
}