/* 质数定义为在大于1的自然数中，除了1和它本身以外不再有其他因数。 */
#include<stdio.h>
int main()
{
    printf("Enter range(> 1): ");
    int start, end, i, j;
    int flag;
    scanf("%d %d", &start, &end);

    for(i = start; i <= end; i ++)
    {
        flag = 0; // 默认是素数
        for(j = 2; j < i; j ++)
        {
            if(i % j == 0)
            {
                flag = 1;
            }
        }
        if(flag == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
