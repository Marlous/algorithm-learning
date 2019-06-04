#include<stdio.h>
#include<math.h>
int main()
{
    double a,x1,x2,temp,num1,num2;
    x1=1;//x1取一个初值。
    scanf("%lf",&a);
    do
    {
        x2=0.5*(x1+a/x1);//迭代公式。
        temp=x1;//保存求出的x1值。
        x1=x2;//准备下一次循环x1的值。

        num1=temp-x2;
        num2=fabs(num1);
    }while(num2>=10e-5);//满足一直循环。
    printf("%lf is root1=%lf,root2=%lf\n",a,temp,x2);
    return 0;
}
