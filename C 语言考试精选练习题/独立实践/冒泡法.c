#include<stdio.h>
#define N 6
int main()
{
    int num[N];
    int i, j, temp;
    puts("Enter 6 numbers:");
    for(i = 0; i < N; i ++)
    {
        scanf("%d", &num[i]);
    }

    for(i = 0; i < N - 1; i ++)
    {
        for(j = 0; j < N - i - 1; j ++)
        {
            if(num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    for(i = 0; i < N; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}
