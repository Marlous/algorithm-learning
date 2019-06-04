#include<stdio.h>
int main()
{
    int num[15]={4,2,7,9,243,5,45,43,121,71,98,6,54,76,34};
    int max,i,j,temp;
    int number;
    int low,mid,high,flag;
    for(i=0;i<=14;i++)
    {
        printf("%d,",num[i]);
    }
    printf("\n\n");

    for(i=0;i<=13;i++) //从大到小排序。
    {
        for(j=i+1;j<=14;j++)
        {
            if(num[i]<num[j]) //把第i个数认为是最大的。
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    for(i=0;i<=14;i++)
    {
        printf("%d,",num[i]);
    }

    printf("\nEnter a number:\n");
    scanf("%d",&number);

    flag=1;low=0;high=14; //二分法找数。注意数组是从小到大还是从大到小！！下面的标记判断不同。
    while(low<=high)
    {
        mid=(low+high)/2;
        if(number==num[mid])
        {
            printf("\nsite:num[%d]\nthe sequence:%d\n",mid,mid+1);
            flag=0;
            break;
        }
        else if(number>num[mid])
        {
            high=mid-1;
        }
        else if(number<num[mid])
        {
            low=mid+1;
        }
    }
    if(flag!=0)
    {
        printf("None!\n");
    }
    return 0;
}
