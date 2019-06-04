#include<stdio.h>
void convert(int n);
int main()
{	int num;
    scanf("%d", &num);
    if (num < 0)
    {
        printf("-");
        num = -num;
    }
    convert(num);
    printf("\n");
    return 0;
}

void convert(int n)
{
    int i;
    if ((i = n / 10) != 0)
    {
        convert(i); //内层函数执行完，返回来接着执行下面的语句。
    }
    putchar(n % 10 + '0');
}
