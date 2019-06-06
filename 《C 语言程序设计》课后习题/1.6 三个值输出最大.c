/* 默认将第一个数看成最大的，然后与之比较 */
#include<stdio.h>
int main()
{
    printf("Please enter three numbers(use gap to split number):\n");
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    if(max < b)
    {
        max = b;
    }
    if(max < c)
    {
        max = c;
    }
    printf("MAX = %d", max);
    return 0;
}
