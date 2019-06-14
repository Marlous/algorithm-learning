/*辗转相除法：
取两个数中最大的数做除数，较小的数做被除数，
用最大的数除以较小数，如果余数为0，则较小数为这两个数的最大公约数，
如果余数不为0，
用较小数除以上一步计算出的余数，直到余数为0，则这两个数的最大公约数为上一步的余数。

大除以小，余为0取小。否则小除以余，为0取上次余（这次的小的数）*/

#include<stdio.h>
int main()
{
    printf("Enter two numbers:\n");
    int a, b, temp;
    scanf("%d %d", &a, &b);
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
    printf("number is %d", b);
    return 0;
}
