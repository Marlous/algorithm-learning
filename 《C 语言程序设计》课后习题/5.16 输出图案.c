#include<stdio.h>
int main()
{
    int i, j, n = 3, m = 1; //n 为上半部分图形空格初值，m 为下半部分图形空格初值。
    for(i = 1; i <= 8; i++) //图形上面一半行数。
    {
        if(i % 2 != 0) //判断为奇数行。
        {
            for(j = 0; j <= n - 1; j++) //每个不同奇数行空格数控制。
            {
                printf(" "); //每行输出空格数。
            }
            n = n - 1; //下一个奇数行空格数减一。
            for(j = 1; j <= i; j++) //每个不同奇数行星号数控制。
            {
                printf("*");
            }
            printf("\n"); //每个奇数行输出后换行。
        }
        else
        {
            printf("\n"); //输出空行。
        }
    }


    for(i = 1; i <= 5; i++) //图形下面一半行数。
    {
        if(i % 2 != 0) //判断为奇数行。
        {
            for(j = 1; j <= m; j++) //每个不同奇数行空格数控制。
            {
                printf(" "); //每行输出空格数。
            }
            m = m + 1; //下一个奇数行空格数加一。
            for(j = 1; j <= 6 - i; j++) //每个不同奇数行星号数控制。
            {
                printf("*");
            }
            if(i != 5) //确保最后一行不换行。
            {
                printf("\n");
            }
        }
        else
        {
            printf("\n"); //输出空行。
        }
    }
    return 0;
}
