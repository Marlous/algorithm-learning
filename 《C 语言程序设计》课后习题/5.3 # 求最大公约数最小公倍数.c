/* 求最小公倍数是用的一个公式，即两数的乘积除以最大公约数就得到最小公倍数。*/
#include<stdio.h>
int main()
{
    printf("Enter two numbers:\n");
    int a, b, temp, remain, num1, num2;
    scanf("%d %d", &a, &b);
    num1 = a;
    num2 = b;
    if(a < b)
    {
        temp = a;
        a = b;
        b = temp; // a 为大的数
    }
    while(a % b != 0) // 直到余数为 0
    {
        remain = a % b;
        a = b;
        b = remain;
    }

    printf("Zui Da Gong Yue Shu:%d\n", b);
    printf("Zui Xiao Gong Bei Shu:%d\n", num1 * num2 / b);
    return 0;
}
