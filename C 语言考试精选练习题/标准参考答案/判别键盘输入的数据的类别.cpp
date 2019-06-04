#include"head.h"
void main()
{
	char s[N];
	int i=0,count1=0,count2=0,count3=0,count4=0;
	puts("ÇëÊäÈë×Ö·ûÊý×é");
	gets(s);
	while(s[i]!='\0')
	{
		if((s[i]>='A')&&(s[i]<='Z'))
			count1++;
		else
			if((s[i]>='a')&&(s[i]<='z'))
				count2++;
			else
				if((s[i]>='0')&&(s[i]<='9'))
					count3++;
				else
					count4++;
		i++;
	}
	printf("%d %d %d %d",count1,count2,count3,count4);
}

