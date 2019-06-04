#include<stdio.h>
#include<math.h>
int main()
{
    float p=6000,d=300000,r=0.01;
    float m;
    m=(log10(p/(p-d*r)))/log10(1+r);
    printf("m=%.2f\n",m);
    return 0;
}
