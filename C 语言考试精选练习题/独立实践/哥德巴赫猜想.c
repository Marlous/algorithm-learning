/* 每个大于等于6的偶数都能写成两个奇素数之和

设ｎ为大于等于６的一个偶数，可将其分解为ｎ１和ｎ２两个数，
分别检验ｎ１和ｎ２是否为素数，若都是，则该数得到验证。
若ｎ１不是素数，就不必再检查ｎ２是否为素数。
先从ｎ１＝２开始，检验ｎ１和ｎ２（＝ｎ－ｎ１）是否为素数。
然后使ｎ１＋２再检验ｎ１，ｎ２是否为素数．．．，直到ｎ１＝ｎ／２为止

https://wenku.baidu.com/view/93b8d0515727a5e9846a6166.html
 */

#include<stdio.h>

int checksu(int num);
int checkji(int num);

int main()
{
    printf("Enter even number >= 6 :");
    int num, a, b;
    scanf("%d", &num);

    for(a = 2; a <= num / 2; a ++)
    {
        b = num - a;
        if(checksu(a) && checkji(a) && checksu(b) && checkji(b))
        {
            printf("%d %d\n",a, b);
        }
    }

    return 0;
}

int checksu(int num)
{
    int flag = 1;
    int i, j;
    for(i = 2; i < num; i ++)
    {
        if(num % i == 0)
        {
            flag = 0;
        }
    }
    if(flag == 1)
    {
        return 1; // 是素数
    }
    else if(flag == 0)
    {
        return 0; // 不是素数
    }
}

int checkji(int num)
{
    if(num % 2 != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
