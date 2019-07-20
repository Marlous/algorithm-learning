/* 求第 n 项是多少 */
#include<stdio.h>
int f(int n);

int main()
{
    printf("Enter n item:");
    int n;
    scanf("%d", &n);
    printf("is: %d", f(n));
    return 0;
}

int f(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else if(n == 2)
    {
        return 1;
    }
    else
    {
        return f(n - 1) + f(n - 2);
    }
}
