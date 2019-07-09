#include<stdio.h>
int main()
{
    printf("Enter two numbers: ");
    int a, b, temp;
    scanf("%d %d", &a, &b);
    int num1 = a;
    int num2 = b;
    if(a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    while(a % b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    printf("zui da gong yue shu: %d\n", b);
    printf("zui xiao gong bei shu: %d", num1 * num2 / b);
}
