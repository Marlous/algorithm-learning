#include<stdio.h>
int main()
{
    int num, i, flag;
    puts("Enter a number (>1):");
    scanf("%d", &num);

    flag = 0;
    for(i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            flag = 1;
        }
    }
    if(flag == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
