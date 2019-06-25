/* 每次选出最小的与未排序的第一个交换，从头到尾

第n个位置分别与后面每个数比较，大就交换。第一轮找出最小的，第二轮找出第二小的排好，依此类推。 */
#include<stdio.h>
int main()
{
    int num[10] = {45, 2, 67, 8, 76, 98, 1, 34, 5, 100}; //10个整数排序。
    int i, j, min, temp;

    for(i = 0; i < 9; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    printf("{45,2,67,8,76,98,1,34,5,100} selection sorted:\n\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}
