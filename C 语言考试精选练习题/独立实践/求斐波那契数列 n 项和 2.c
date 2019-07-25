#include<stdio.h>
int main()
{
    int num, i = 3;
    int n;
    int n1 = 1;
    int n2 = 1;
    int sum = 2;

    printf("Enter num (num >= 3)");
    scanf("%d", &num);

    while(i <= num)
    {
        n = n1 + n2; // 计算出此项（大于 3）
        sum = sum + n;
        n1 = n2;
        n2 = n;
        i ++;
    }

    printf("%d", sum);

    return 0;
}
