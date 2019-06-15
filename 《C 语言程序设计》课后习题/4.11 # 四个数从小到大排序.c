/* 冒泡排序 */
#include<stdio.h>
int main()
{
    int a[4];
    int n = 4;
    int i, j, temp;
    printf("Enter four numbers:\n");
    for(i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nnumber:%d %d %d %d\n\n", a[0], a[1], a[2], a[3]);

    for(i = 0; i < n - 1; i++) // 趟数（元素个数 - 1）
    {
        for(j = 0; j < n - i - 1; j++) // 某一趟比较的次数（元素个数 - 趟数） - 1，再减一是因为下标从 0 开始
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("sorted number:%d %d %d %d\n", a[0], a[1], a[2], a[3]);
    return 0;
}
