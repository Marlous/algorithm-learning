#include<stdio.h>
#define N 100
int main()
{
    char b[N];
	gets(b);
	{
		int i=0;
		while(b[i]!='\0')
		{
			if((b[i]>='a')&&(b[i]<='z'))
				b[i]=b[i]-32;
			else
				if((b[i]>='A')&&(b[i]<='Z'))
					b[i]=b[i]+32;
				else
					;
			i++;
		}
		puts(b);
	}
}
		    	
