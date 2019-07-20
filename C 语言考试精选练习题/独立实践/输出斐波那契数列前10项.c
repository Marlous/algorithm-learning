#include<stdio.h>
int main()
{
    int i;
    int n[11];
    n[1] = 1;
    n[2] = 1;
    for(i = 3; i <= 10; i ++)
    {
        n[i] = n[i - 1] + n[i - 2];
    }

    for(i = 1; i <= 10; i ++)
    {
        printf("%d ", n[i]);
    }

    return 0;
}
