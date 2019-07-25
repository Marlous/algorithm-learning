/* https://blog.csdn.net/qq_30340877/article/details/52974315
用弦截法求方程x^3-5x^2+16x-80=0的根
思路：
先输入两个值x1 x2，满足函数值异号（这两个值之间）
计算出弦与x轴相交的值x
x1 x 函数值相乘，同好则改变区间，x变为x1，异号的话，x变为x2
直到满足x对应函数值小到一个值。如 while(fabs(y)>=0.00001);
用两点式求解直线方程与x轴的交点值。y-y1 = k(x-x1)

总结：和二分法相同，不同在于中间值x是与x轴相交的值，需通过两点式算出x的值。
*/
#include<stdio.h>
#include<math.h>

float f(float x);
float xpoint(float x1, float x2);

int main()
{
    float x1, x2, x;
    printf("Enter x1, x2:");
    scanf("%f %f", &x1, &x2);
    while(f(x1) * f(x2) >= 0)
    {
        printf("Enter x1, x2:");
        scanf("%f %f", &x1, &x2);
    }

    do
    {
        x = xpoint(x1, x2);
        if(f(x) * f(x1) < 0)
        {
            x2 = x;
        }
        else
        {
            x1 = x;
        }
    }while(fabs(f(x)) > 1e-2);

    printf("root = %f", x);

    return 0;
}

float f(float x)
{
    float value;
    value = pow(x, 3) - 5 * pow(x, 2) + 16 * x - 80;
    return value;
}

float xpoint(float x1, float x2)
{
    float value;
    value = (-f(x1) * (x2 - x1)) / (f(x2) - f(x1)) + x1;
    return value;
}
