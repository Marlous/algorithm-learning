/*辗转相除法：取两个数中最大的数做除数，较小的数做被除数，
用最大的数除较小数，如果余数为0，则较小数为这两个数的最大公约数，
如果余数不为0，
用较小数除上一步计算出的余数，直到余数为0，则这两个数的最大公约数为上一步的余数。

大除小，余为0取小。否则小除余，为0去上次余*/

#include<stdio.h>
int main()
{
    printf("Enter two numbers:\n");
    int a,b,temp;
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    while(a%b!=0)
    {
        temp=a%b;
        a=b;
        b=temp;
    }
    printf("number is %d",b);
    return 0;
}
