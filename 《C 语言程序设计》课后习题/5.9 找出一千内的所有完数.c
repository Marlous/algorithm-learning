/*一个数等于它的因子之和。
假如整数n除以m，结果是无余数的整数，那么我们称m就是n的因子。
因子就是所有可以整除这个数的数,不包括这个数自身,因数包括本身。*/
#include<stdio.h>
void PrintNumber(int a);
int main()
{
    int i,j,s;
    for(i=2;i<=1000;i++)
    {
        s=0;
        for(j=1;j<i;j++)//判断数i的因子。
        {
            if(i%j==0)
            {
                s=s+j;//数i的因子之和。因子为j。
            }
        }
        if(i==s)
        {
            PrintNumber(i);
        }
    }
    return 0;
}

void PrintNumber(int a)
{
    int n;
    printf("%d its factors are ",a);
    for(n=1;n<a;n++)
    {
        if(a%n==0)
        {
            printf("%d,",n);
        }
    }
    printf("\n");

}
