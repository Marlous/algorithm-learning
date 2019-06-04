/* 高度一百米，每次反弹原高度一半，第十次落地共经过多少米，反弹多高 */
#include<stdio.h>
int main()
{
    double s=100,r=50;
    int i;
    for(i=2;i<=10;i++)
    {
        s=s+r*2;
        r=r/2;
    }
    printf("No.10 sum=%lf M\nrebound=%lf M",s,r);
    return 0;
}
