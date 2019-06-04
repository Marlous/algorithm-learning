/*一个三位数，每位立方和等于它本身*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i,s;
    int ge,shi,bai;
    for(i=100;i<=999;i++)
    {
        ge=i%10;
        shi=i/10%10;
        bai=i/100%10;
        s=pow(ge,3)+pow(shi,3)+pow(bai,3);
        if(i==s)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
