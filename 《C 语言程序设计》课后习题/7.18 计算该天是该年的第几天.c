#include<stdio.h>
void calculate(int year,int month,int day);
int main()
{
    printf("Enter year month day:\n");
    int year,month,day;
    scanf("%d %d %d",&year,&month,&day);
    calculate(year,month,day);
    return 0;
}

void calculate(int year,int month,int day)
{
    int i,sum=0,flag=0,yearsum=365;
    int remain;
    float percentage;
    int d[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if((year%4==0 && year%100!=0) || year%400==0)
    {
        d[1]=29;
        flag=1;
    }
    for(i=0;i<month-1;i++)
    {
        sum=sum+d[i];
    }
    sum=sum+day;
    if(flag==1)
    {
        yearsum=366;
    }
    remain=yearsum-sum;
    percentage=(sum*1.0)/yearsum;
    printf("\nsum:%d\nremain:%d\npercentage:%3.0f%%\n",sum,remain,percentage*100+0.5);
}
