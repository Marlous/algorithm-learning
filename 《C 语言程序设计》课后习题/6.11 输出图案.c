#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        if(i!=1)
        {
            for(j=1;j<=2*i-2;j++) //第二行到第五行前面空格为2，4，6，8个。
            {
                printf(" ");
            }
        }
        printf("* * * * *");
        printf("\n");
    }
    return 0;
}
