#include<stdio.h>
int yue(int a, int b);
int bei(int a, int b);
int main()
{
    printf("shu ru shu:\n");
    int a, b;
    scanf("%d %d", &a, &b); //输入不要加换行
    printf("zui da gongyue shu shi:%d\n", yue(a, b));
    printf("zui xiao gong bei shu shi:%d\n", bei(a, b));
    return 0;
}

int yue(int a, int b)
{
    int temp;
    int num;
    if(a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    while(a % b != 0)
    {
        num = a % b;
        a = b;
        b = num;
    }
    return b;
}

int bei(int a, int b)
{
    int yuenum = yue(a, b);
    return a * b / yuenum;
}
