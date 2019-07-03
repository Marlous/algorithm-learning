/* 书中给出了公式，直接带入即可 */
#include<stdio.h>
float p(int n, float x);
int main()
{
    printf("Enter n,x:\n");
    int n;
    float x;

    scanf("%d %f", &n, &x);
    printf("value:%f", p(n, x));

    return 0;
}

float p(int n, float x)
{
    float num;
    if(n == 0)
    {
        num = 1;
    }
    else if(n == 1)
    {
        num = x;
    }
    else if(n > 1)
    {
        num = ((2 * n - 1) * x - p(n - 1, x) - (n - 1) * p(n - 2, x)) / n;
    }
    return num;
}
