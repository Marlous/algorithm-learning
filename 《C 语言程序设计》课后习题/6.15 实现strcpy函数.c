/* 拷贝，将一个数组中的每个字符赋给另一个数组中的每个字符 */
#include<stdio.h>
#include<stdlib.h>
#define N 20
char *copy(char str1[], char str2[]);
int main()
{
    char str1[N], str2[N];

    printf("Enter str2:\n");
    gets(str2);

    printf("\nstr1:%s\n", copy(str1, str2));

    return 0;
}

char *copy(char str1[], char str2[])
{
    int i = 0;
    while(str2[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = str2[i];

    return str1;
}
