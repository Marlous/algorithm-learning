/* a-z,b-y,c-x,A-Z,B-Y,C-X i到27-i */
#include<stdio.h>
#include<stdlib.h>
#define N 20
int main()
{
    char a[N],b[N];
    int i=0,j=0;
    printf("Enter encode:\n");
    gets(a);
    while(a[i]!='\0') //加密
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i]-64;
            b[i]=26-a[i]+1+64;
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            a[i]=a[i]-96;
            b[i]=26-a[i]+1+96;
        }
        else
        {
            b[i]=a[i];
        }
        i++;
    }
    b[i]='\0'; //记得b数组要自己添加一个结束符。
    puts(b);
    printf("\n");

/* =================================== */
    printf("Enter decode:\n"); //解密不能再用i计数，因为值已经改变了。加密与解密完全一样
    gets(a);
    while(a[j]!='\0') //加密
    {
        if(a[j]>=65 && a[j]<=90)
        {
            a[j]=a[j]-64;
            b[j]=26-a[j]+1+64;
        }
        else if(a[j]>=97 && a[j]<=122)
        {
            a[j]=a[j]-96;
            b[j]=26-a[j]+1+96;
        }
        else
        {
            b[j]=a[j];
        }
        j++;
    }
    b[j]='\0';
    puts(b);
    printf("\n");
    return 0;
}
