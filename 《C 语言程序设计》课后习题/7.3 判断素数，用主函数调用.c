/* 质数定义为在大于1的自然数中，除了1和它本身以外不再有其他因数。 */
#include<stdio.h>
void sushu(int num);
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    sushu(num);
    return 0;
}

void sushu(int num)
{
    if(num>1 && num!=2)
    {
        int i;
        int flag=1;
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                flag=0;
            }
        }
        if(flag!=0)
        {
            printf("YES!\n");
        }
        else
        {
            printf("NO!\n");
        }
    }
    else if(num==2)
    {
        printf("YES!\n");
    }
    else
    {
        printf("NO!\n");
    }
}
