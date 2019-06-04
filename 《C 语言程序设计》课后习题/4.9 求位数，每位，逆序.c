#include<stdio.h>
int main()
{
    printf("Enter < five digit integrated number:\n");
    int num;
    int digit[4];
    int i,count;
    scanf("%d",&num);
    if(num<=0 || num>=10000)
    {
        printf("ERROR!\n");
        scanf("%d",&num);
    }
    digit[0]=num%10;
    digit[1]=num/10%10;
    digit[2]=num/100%10;
    digit[3]=num/1000%10;


    if(digit[3]!=0)//计算有几位
    {
        printf("\ndigit:4\n\n");
        count=4;
    }
    else if(digit[2]!=0)
    {
        printf("digit: 3\n\n");
        count=3;
    }
    else if(digit[1]!=0)
    {
        printf("digit: 2\n\n");
        count=2;
    }
    else
    {
        printf("digit: 1\n\n");
        count=1;
    }


    for(i=0;i<=count-1;i++)//输出每一位
    {
        switch(i)
        {
            case 0:printf("First digit: %d\n",digit[0]);break;
            case 1:printf("Second digit: %d\n",digit[1]);break;
            case 2:printf("Third digit: %d\n",digit[2]);break;
            case 3:printf("Fourth digit: %d\n",digit[3]);break;
        }
    }


    printf("\n\ninverse number:");//逆序输出
    for(i=0;i<count;i++)
    {
        switch(i)
        {
            case 0:printf("%d",digit[0]);break;
            case 1:printf("%d",digit[1]);break;
            case 2:printf("%d",digit[2]);break;
            case 3:printf("%d",digit[3]);break;
        }
    }
    printf("\n\n");
    return 0;
}
