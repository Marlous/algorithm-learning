/*牛顿迭代法求方程的根。公式为 x2=x1-f(x1)/f'(x1) ，x1 初值取某数附近。
ax^3 + bx^2 + cx + d = 0 , a=1 b=2 c=3 d=4  求x在1附近的实根*/
#include<stdio.h>
#include<math.h>
void newton(int a,int b,int c,int d);
int main()
{
    int a=1,b=2,c=3,d=4;
    newton(a,b,c,d);
    return 0;
}

void newton(int a,int b,int c,int d)
{
    double temp;
    double x1=1,x2;
    do
    {
        x2=x1-(a*pow(x1,3)+b*pow(x1,2)+c*x1+d)/(3*a*pow(x1,2)+2*b*x1+c);
        temp=x1;
        x1=x2;
    }while(fabs(temp-x2)>1e-5);
    printf("x1=%lf,x2=%lf",temp,x2);
}
