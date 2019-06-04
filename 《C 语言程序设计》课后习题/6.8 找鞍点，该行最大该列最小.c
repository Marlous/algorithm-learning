/*二维数组中每个数不重复的情况*/
#include<stdio.h>
int main()
{
    int num[3][3]={{2,5,11},{2,8,9},{6,2,10}};
    int min,max,maxi,maxj,i,row,j,flag;
    int flagout=0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%4d",num[i][j]);
        }
        printf("\n");
    }
    printf("\n"); //输出矩阵

    for(i=0;i<3;i++)
    {
        max=num[i][0]; //默认每行第一个为最大值。
        maxi=i;
        maxj=0;
        for(j=1;j<3;j++) //找出每行最大的值（与每列比较）。
        {
            if(num[i][j]>max)
            {
                max=num[i][j]; //记录下最大值和位置。
                maxi=i;
                maxj=j;
            }
        }
        flag=1; //默认在该行有鞍点（局部标记）
        for(row=0;row<3;row++) //该行最大的值与每行该列比较。
        {
            if(num[i][maxj]>num[row][maxj])
            {
                flag=0; //不是这列最小值，所以不是鞍点，flag置为0
            }
        }
        if(flag==1)
        {
            printf("YES!point is %d\n",num[maxi][maxj]);
            flagout=1; //有输出有鞍点。（全局标记）
        }
    }
    if(flagout!=1)
    {
        printf("None!\n"); //没输出则没鞍点
    }
    return 0;
}
