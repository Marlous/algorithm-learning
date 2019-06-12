#include<stdio.h>
int main()
{
    printf("Enter a number:\n");
    int n;
    scanf("%d", &n);
    if(n % 3 == 0 && n % 5 == 0)
    {
        printf("\nYES!");
    }
    else
    {
        printf("\nNO!");
    }
    return 0;
}
