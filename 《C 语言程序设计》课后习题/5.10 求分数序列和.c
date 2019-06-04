/* 2/1+3/2+5/3+8/5+13/8... */
#include<stdio.h>
int main()
{
   double s=0,a=2,b=1,temp;
   int i;
   for(i=1;i<=20;i++)
   {
       printf("%d: %.0lf/%.0lf\n",i,a,b);//显示每一项。

       s=s+a/b;
       temp=a;
       a=a+b;
       b=temp;
   }
   printf("\n2/1+3/2+5/3+8/5+13/8... (20 item)= %lf\n",s);
   return 0;
}
