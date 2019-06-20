/* 2/1+3/2+5/3+8/5+13/8... */
#include<stdio.h>
int main()
{
   double sn = 0, tn;
   int i, a = 2, b = 1, temp;
   for(i = 1; i <= 20; i++)
   {
       printf("%d: %d/%d\n", i, a, b);//显示每一项。

       tn = (double)(a) / (double)(b);
       sn = sn + tn;
       temp = a + b;
       b = a;
       a = temp;
   }
   printf("\n2/1+3/2+5/3+8/5+13/8... (20 item)= %lf\n", sn);
   return 0;
}
