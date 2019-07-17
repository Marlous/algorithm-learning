#include"head.h"
#include<malloc.h>
struct node
{
	char number[N];
	char name[N];
	int a[5];
};
void main()
{
	int n,i,max,place;
	struct node *p;
	puts("请输入学生数目");
	scanf("%d",&n);
	p=(struct node*)malloc(sizeof(struct node)*n);
	for(i=0;i<n;i++)
	{
		scanf("%s%s%d%d%d",p[i].number,p[i].name,&(p[i].a[0]),&(p[i].a[1]),&(p[i].a[2]));
	}
	for(i=0;i<n;i++)
	{
		p[i].a[3]=p[i].a[0]+p[i].a[1]+p[i].a[2];
		p[i].a[4]=(p[i].a[0]+p[i].a[1]+p[i].a[2])/3;
	}
	max=p[0].a[3];
	place=0;
	for(i=1;i<n;i++)
	{
		if(p[i].a[3]>max)
		{
			place=i;
			max=p[i].a[3];
		}
	}
	printf("%s %s %d %d\n",p[place].number,p[place].name,p[place].a[3],p[place].a[4]);
}