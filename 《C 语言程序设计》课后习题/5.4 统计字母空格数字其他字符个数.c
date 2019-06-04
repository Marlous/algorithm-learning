#include<stdio.h>
#include<stdlib.h>
#define IN 20
int main()
{
    printf("Enter a sequence of characters:\n");
    char a[IN];
    int i=0;
    int countZi=0,countKong=0,countShu=0,countQi=0;
    gets(a);
    while(a[i]!='\0')
    {
        if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))
        {
            countZi++;
        }
        else if(a[i]==' ')
        {
            countKong++;
        }
        else if(a[i]>=48 && a[i]<=57)
        {
            countShu++;
        }
        else
        {
            countQi++;
        }
        i++;
    }
    printf("\nZiMu:%d\nKongGe:%d\nShuZi:%d\nQiTa:%d\n",countZi,countKong,countShu,countQi);
    return 0;
}
