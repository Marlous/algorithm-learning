/* 求最小公倍数是用的一个公式，即两数的乘积除以最大公约数就得到最小公倍数。*/
#include<stdio.h>
int main()
{
    printf("Enter two numbers:\n");
    int m,n,temp,a;
    int num1,num2;
    scanf("%d %d",&m,&n);
    num1=m;
    num2=n;
    if(m<n)
    {
        temp=m;
        m=n;
        n=temp;
    }
    if(m%n==0)
    {
        a=n;
    }
    while(m%n!=0)
    {
        a=m%n;
        m=n;
        n=a;
    }
    printf("Zui Da Gong Yue Shu:%d\n",a);
    printf("Zui Xiao Gong Bei Shu:%d\n",num1*num2/n);
    return 0;
}
