//�������ַ��еĵ��ʵĸ���
#include<stdio.h>
#include<string.h>
#define N 30
void main()
{
	char b[N],i=0;
	int length,count=0;
	puts("������ַ�����ҪС�ڵ���N");
	gets(b);
	length=strlen(b);
//	while(b[i]==' ') 
//		i++;
//	 count++;
	for(i=0;i<length;i++)
		if(b[i]==' ') 
		   ;
		else
		{
			count++;
			i++;
			while(b[i]!=' ')
				i++;
		}
		printf("%d",count);
}

	