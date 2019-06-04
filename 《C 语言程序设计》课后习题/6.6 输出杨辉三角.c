#include<stdio.h>
int main()
{
    int i,j;
    int a[10][10];
    for(i=0;i<10;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0 || j==i)
            {
                a[i][j]=1;
                printf("%3d ",a[i][j]);
            }
            else
            {
                a[i][j]=a[i-1][j-1]+a[i-1][j];
                printf("%3d ",a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
