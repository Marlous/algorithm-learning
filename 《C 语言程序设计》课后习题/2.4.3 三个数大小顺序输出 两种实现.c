/* 方法一：两两比较，交换。
方法二：数组。冒泡排序（每个数分别与未排序的比较）。
3 个数比较 2 趟，每个数分别与未排好的比较然后交换位置 */
#include<stdio.h>
void OrderOne();
void OrderTwo();
int main()
{
    printf("Enter number to select function that MAX to MIN:\n a.simple function\n b.bubble sort\n");
    char selection;
    scanf("%c", &selection);
    switch(selection)
    {
        case 'a':
            OrderOne(); break;
        case 'b':
            OrderTwo(); break;
        default:
            printf("ERROR SELECTION"); break;
    }
    return 0;
}

void OrderOne()
{
    printf("Enter three numbers(use gap to split number):\n");
    int a, b, c, temp;
    scanf("%d %d %d", &a, &b, &c);
    if(a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if(b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    if(a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    printf("MAX to MIN: %d %d %d", c, b, a);
}

void OrderTwo()
{
    int i, j, temp;
    int num[3];
    printf("Enter three numbers(use gap to split number):\n");
    for(i = 0; i <= 2; i++)
    {
        scanf("%d",&num[i]);
    }
    for(i = 0; i < 3-1; i++) // 趟数
    {
        for(j = 0; j < 3-1-i; j++) // 比较次数（元素个数 - 第几趟）
        {
            if(num[j] > num[j + 1])
            {
                temp = num[j + 1];
                num[j + 1] = num[j];
                num[j] = temp;
            }
        }
    }
    printf("MAX to MIN:");
    for(i = 2; i >= 0; i--)
    {
        printf("%d ", num[i]);
    }
}
