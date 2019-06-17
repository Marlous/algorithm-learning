/* tn 求法：考虑此项（某一项）与第几项这个几间的关系 */
#include<stdio.h>
int main()
{
    int i;
    double tn = 1, sn = 0;
    for(i = 1; i <= 20; i++)
    {
        tn = tn * i;
        sn = sn + tn;
    }
    printf("1! + 2! + 3! + ... + 20! = %e", sn);
    return 0;
}
