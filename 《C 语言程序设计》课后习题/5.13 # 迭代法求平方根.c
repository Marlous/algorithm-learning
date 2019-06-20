/* 注意，初始的 x1 可以取任意值，这里取 1 */
#include<stdio.h>
#include<math.h>
int main()
{
    double a, x1, x2, root1, root2;
    x1 = 1;//x1取一个初值。
    scanf("%lf", &a);

    do
    {
        x2 = 0.5 * (x1 + a / x1);//迭代公式。
        root1 = x1;
        root2 = x2;
        x1 = x2; //准备下一次循环x1的值。
    }while(fabs(root1 - root2) >= 10e-5);//满足一直循环。

    printf("%lf is root1=%lf, root2=%lf\n", a, root1, root2);
    return 0;
}
