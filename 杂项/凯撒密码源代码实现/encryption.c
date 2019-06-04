#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 500
int main()
{
	int i = 0,k,m,n,l;
	char str1[N], str2[N];
	printf("This is encryption program!\n");
	printf("Please input proclaimed in writing:\n");
	gets(str1);
	printf("Please input the key:\n");
	scanf("%d",&k);
	m=strlen(str1);
	printf("The txt length is %d\n",m);
	printf("\n------------\n");
	printf("ciphertext is:\n");
	for(i=0;i<m;i++)
	{
		n=(int)str1[i];
		if
			(str1[i]==' ')
		{
			printf(" ");
			str2[i] = str1[i];
		}
		else if(n>96 && n<123)
		{
			n=(n-97+k)%26;
			if(n<0)
				n=26+n;
			l=(char)(n+97);
			printf("%c",l);
			str2[i]=l;
		}
		else if(n>64 && n<91)
		{
			n=(n-65+k)%26;
			if(n<0)
				n=26+n;
			l=(char)(n + 97);
			printf("%c",l);
			str2[i]=l;
		}
	}
	str2[i]='\0';
	getchar();
	return 0;
}
