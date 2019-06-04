#include<stdio.h>
int main()
{
    int i,j;
    for(i=100;i<=200;i++)
    {
        int flag=0; //先默认是素数。
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1; //只要有一个能被整除说明不是素数，标记为1。
            }
        }
        if(flag!=1)
        {
            printf("number is %d\n",i);
        }
    }
    return 0;
}
