#include<stdio.h>
#define N 10
int main()
{
    int num[N];
    int i,j,temp,count=0;
    printf("Enter numbers:(MAX 9 pieces)\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&num[i]);
        count=count+1;
        if(getchar()=='\n')break;
    }
    printf("\ncount=%d",count);
    printf("\n");

    for(i=0;i<count-1;i++) //先排序输入的数。选择法。
    {
        for(j=i+1;j<count;j++)
        {
            if(num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    for(i=0;i<count;i++) //输出排好的。
    {
        printf("%d ",num[i]);
    }
    printf("\n");


    printf("\nAdd a number:"); //插入的数放在末尾。
    scanf("%d",&num[count]);
    printf("\n");


    for(i=0;i<count-1+1;i++) //数组增加一个插入的数。排序。
    {
        for(j=i+1;j<count+1;j++)
        {
            if(num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    for(i=0;i<count+1;i++) //输出排好的。
    {
        printf("%d ",num[i]);
    }
    printf("\n");
    return 0;
}
