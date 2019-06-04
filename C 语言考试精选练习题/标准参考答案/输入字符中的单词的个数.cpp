//求输入字符中的单词的个数
#include<stdio.h>
#include<string.h>
#define N 30
void main()
{
	char b[N],i=0;
	int length,count=0;
	puts("输入的字符长度要小于等于N");
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

	