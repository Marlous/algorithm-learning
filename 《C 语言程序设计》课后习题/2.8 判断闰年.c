#include<stdio.h>
int main()
{
    int i,count=0;
    for(i=1900;i<=2000;i++)
    {
        if((i%4==0 && i%100!=0) || i%400==0)
        {
            printf("YEAR is %d\n",i);
            count++;
        }
    }
    printf("\ntotal:%d\n",count);
    return 0;
}
