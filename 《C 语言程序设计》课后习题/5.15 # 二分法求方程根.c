/* 2x^3 - 4x^2 + 3x - 6 = 0 在（-10，10）之间的根。精确到一个值，如1e-5。
取区间中点i=(a+b)/2，如果f(a)*f(i)小于0,则区间就变为在[a,i].否则区间就在[i,b],将新的区间表示为[a,b]
异号表示在此区间中，将区间 ab 赋予新的值，变成新的区间再判断（下限值、中间值代入）*/
#include<stdio.h>
#include<math.h>
int main()
{
    double a = -10, b = 10, i, s;

    do
    {
        i = (a + b) / 2;
        s = (2 * pow(a, 3) - 4 * pow(a, 2) + 3 * a - 6) * (2 * pow(i, 3) - 4 * pow(i, 2) + 3 * i - 6);
        if(s < 0)
        {
            b = i;
        }
        else
        {
            a = i;
        }
    }while( b - a > 1e-5);

    printf("2x^3 - 4x^2 + 3x - 6 = 0 at(-10,10)\nroot1=%lf,root2=%lf\nroot=%5.2lf\n", a, b, b);
    return 0;
}
