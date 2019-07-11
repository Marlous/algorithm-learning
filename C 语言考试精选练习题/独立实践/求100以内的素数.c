#include<stdio.h>
int main()
{
    int flag, i, j;

    for(i = 2; i <= 100; i ++)
    {
        flag = 0;
        for(j = 2; j < i; j ++)
        {
            if(i % j == 0)
            {
                flag = 1;
            }
        }
        if(flag == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
