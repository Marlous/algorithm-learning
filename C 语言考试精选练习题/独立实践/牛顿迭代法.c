/* 2x^3 - 4x^2 +3x - 6 = 0，求1.5附近的根。
公式为 x2=x1-f(x1)/f'(x1) 2为n+1，1为n */
#include<stdio.h>
#include<math.h>
int main()
{
    float temp, x2, x1 = 1.5;
    do
    {
        x2 = x1 - (2 * pow(x1, 3) - 4 * pow(x1, 2) + 3 * x1 - 6) / (6 * pow(x1, 2) - 8 * x1 + 3);
        temp = x1;
        x1 = x2;
    }while(fabs(temp - x2) > 1e-5);
    printf("root1 = %f, root2 = %f", temp, x2);

    return 0;
}
