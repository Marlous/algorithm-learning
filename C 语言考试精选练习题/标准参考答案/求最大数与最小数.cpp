#include<stdio.h>
int main()
{
    int b[10]={1,2,3,4,5,6,912,-12,2,3};
	int i=0,max,min;
	max=b[0];
	min=b[0];
	for(i=1;i<10;i++)
		if(b[i]>max)
			max=b[i];
		else
			if(b[i]<min)
				min=b[i];
			else
				;
	printf("%d %d ",max,min);
}
