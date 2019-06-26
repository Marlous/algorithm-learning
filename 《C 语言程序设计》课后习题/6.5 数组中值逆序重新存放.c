/* 数存入一个数组，统计数字个数。
然后倒着读赋给另一个数组 */
#include<stdio.h>
int main()
{
    int a[20], b[20];
    int i, count = 0;
    int j = 0;

    printf("Enter value:\n");
    for(i = 0; i < 20; i++)
    {
        scanf("%d", &a[i]);
        count = count + 1;
        if(getchar() == '\n')break;
    }
    printf("\n");

    for(i = count - 1; i >= 0; i--)
    {
        b[j] = a[i];
        j = j + 1;
    }

    for(i = 0; i < count; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
