#include<stdio.h>
int main()
{
    printf("Enter 10 numbers:\n");
    int num[10];
    int i,max;
    for(i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
        printf("inputed %d num:%d\n",i+1,num[i]);
    }
    max=num[0];
    for(i=1;i<=9;i++)
    {
        if(max<num[i])
        {
            max=num[i];
        }
    }
    printf("MAX=%d",max);
    return 0;
}
