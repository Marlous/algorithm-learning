#include<stdio.h>
#define N 5
int main()
{
    int num[N];
    int i, j, temp;
    for(i = 0; i < N; i ++)
    {
        scanf("%d", &num[i]);
    }

    for(i = 0; i < N - 1; i ++)
    {
        for(j = i + 1; j < N; j ++)
        {
            if(num[i] > num[j])
            {
                temp = num[j];
                num[j] = num[i];
                num[i] = temp;
            }
        }
    }

    for(i = 0; i < N; i ++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}
