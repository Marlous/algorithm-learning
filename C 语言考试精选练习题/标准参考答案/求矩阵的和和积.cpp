#include<stdio.h>
#include<string.h>
#define N 3
#define M 3
void main()
{
	int a[N][M],b[N][M],C[N][M]={0},D[N][M]={0};
	int i=0,j=0,sum=0,k;
	puts("ע�����������Ҫ��");
	puts("�������һ������");
    for(i=0;i<N;i++)
		for(j=0;j<M;j++)
			scanf("%d",a[i]+j);
	puts("������ڶ�������");
    for(i=0;i<N;i++)
		for(j=0;j<M;j++)
			scanf("%d",b[i]+j); //������Ժϲ���һ��
	puts("��ʼ�����");
	for(i=0;i<N;i++)
		for(j=0;j<M;j++)
			C[i][j]=a[i][j]+b[i][j];
	puts("��ʼ�����");
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