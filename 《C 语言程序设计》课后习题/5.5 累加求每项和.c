/* 求 Sn=a+aa+...+n个a */
#include<stdio.h>
int main()
{
    printf("Enter a,n:\n");
    int a,n,i;
    int sn=0,tn=0;
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
        tn=tn+a;
        sn=sn+tn;
        a=a*10;
    }
    printf("\nSn=a+aa+...+n ge a=%d",sn);
    return 0;
}
