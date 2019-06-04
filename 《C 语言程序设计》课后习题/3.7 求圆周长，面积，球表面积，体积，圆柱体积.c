/*r=1.5 h=3*/
#include<stdio.h>
#define PI 3.14
int main()
{
    float r,h;
    float zc,mj,bmj,tj,yztj;
    printf("r=? h=?\n");
    scanf("%f %f",&r,&h);
    zc=2*PI*r;
    mj=PI*r*r;
    bmj=4*PI*r;
    tj=(3.0/4.0)*PI*r*r*r;
    yztj=PI*r*r*h;
    printf("Yuan zhou chang: %.2f\n",zc);
    printf("Yuan mian ji: %.2f\n",mj);
    printf("Qiu biao mian ji: %.2f\n",bmj);
    printf("Qiu ti ji: %.2f\n",tj);
    printf("Yuan Zhu ti ji: %.2f\n",yztj);
    return 0;
}
