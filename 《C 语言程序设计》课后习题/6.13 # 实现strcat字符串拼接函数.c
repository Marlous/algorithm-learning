/* 字符串拼接，返回拼接后的地址
 先将两个字符串存在两个数组中，
 遍历找到a数组最后 \0 的位置
 将b数组字符内容复制过去，最后添加上 \0 符号*/
#include<stdio.h>
#include<stdlib.h>
#define N 20
char *connect(char a[], char b[]);
int main()
{
    char a[N], b[N];

    printf("Enter string a:\n");
    gets(a);
    printf("Enter string b:\n");
    gets(b);

    printf("\na, b string:\n%s\n", connect(a,b));

    return 0;
}


char *connect(char a[], char b[])
{
    int i = 0, j = 0;
    while(a[i] != '\0')
    {
        i++;
    }
    while(b[j] != '\0')
    {
        a[i] = b[j];
        i++;
        j++;
    }
    a[i] = '\0';

    return a;
}
