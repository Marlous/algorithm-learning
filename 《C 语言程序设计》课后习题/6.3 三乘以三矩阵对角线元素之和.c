/* 3x3矩阵。*/
#include<stdio.h>
int main()
{
    int num[3][3] = {{2, 6, 3}, {5, 9, 0}, {2, 1, 8}};
    int i, n = 3, m = 4; //m为矩阵阶数。
    int sum, sum1 = 0, sum2 = 0;

    for(i = 0; i < 3; i++)
    {
        sum1 = sum1 + num[i][i];
    }
    for(i = 0; i < 3; i++)
    {
        sum2 = sum2 + num[i][n];
        n = n - 1;
    }

    sum = sum1 + sum2;

    if(m % 2 != 0)
    {
        i = (m - 1) / 2;
        sum = sum - num[i][i];
    }
    printf("sum=%d\n", sum);

    return 0;
}
