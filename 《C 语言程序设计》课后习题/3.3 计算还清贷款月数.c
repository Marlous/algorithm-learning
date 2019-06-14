/* 购房从银行贷了一笔款d， 准备每月还款额为p， 月利率为r，
计算多少月能还清。设d为300000元，p为6000元，r为1%。
对求得的月份取小数点后一位，对第2位按四舍五入处理。 */
#include<stdio.h>
#include<math.h>
int main()
{
    float p = 6000, d = 300000, r = 0.01;
    float m;
    m = (log10(p / (p - d * r))) / log10(1 + r);
    printf("m = %.2f\n", m);
    return 0;
}
