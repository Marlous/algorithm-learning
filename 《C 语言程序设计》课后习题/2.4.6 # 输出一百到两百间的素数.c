/* 整数在一个大于1的自然数中，除了1和此整数自身外，没法被其他自然数整除的数。
判断一个数是素数：拿这个数除以 2 至小于它的正整数，余数全不为 0（无法被整除）*/
#include<stdio.h>
int main()
{
    int i, j;
    for(i = 100; i <= 200; i++)
    {
        int flag = 0; //先默认是素数。
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                flag = 1; //只要有一个能被整除说明不是素数，标记为1。
            }
        }
        if(flag == 0)
        {
            printf("number is %d\n", i);
        }
    }
    return 0;
}
