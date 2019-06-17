/* 求 Sn=a+aa+...+n个a */
#include<stdio.h>
int main()
{
    printf("Enter a, n:\n");
    int a, n, i;
    int sn = 0, tn = 0;
    scanf("%d %d", &a, &n);
    sn = 0;
    tn = a;
    for(i = 1; i <= n; i++)
    {
        sn = sn + tn;
        tn = tn * 10 + a;
    }
    printf("\nSn = a + aa +...+ n ge a = %d", sn);
    return 0;
}
