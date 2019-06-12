#include<stdio.h>
int main()
{
    int sum = 0;
    int add = 0;
    int i;
    for(i = 1; i <= 100; i++)
    {
        add++;
        sum = sum + add;
    }
    printf("1+2+...+100=%d", sum);
    return 0;
}
