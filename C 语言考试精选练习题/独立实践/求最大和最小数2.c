#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Max: %d\n", a > b ? a : b);
    printf("Min: %d", a < b ? a : b);
}
