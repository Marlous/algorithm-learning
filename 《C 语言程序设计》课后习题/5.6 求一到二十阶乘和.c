#include<stdio.h>
int main()
{
    int i;
    double tn=1,sn=0;
    for(i=1;i<=20;i++)
    {
        tn=tn*i;
        sn=sn+tn;
    }
    printf("1!+2!+3!+...+20!=%e",sn);
    return 0;
}
