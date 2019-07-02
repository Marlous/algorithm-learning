/* 遍历字符串中每个直到末尾
遇到空格，
记录下此单词起始位置（由空格的位置 - 长度计算得出）
记录下单词长度
长度计数器清零
不是空格则长度计数器加一 */
#include<stdio.h>
#include<string.h>
#define N 50
void longest(char a[]);
int main()
{
    char temp[N] = {' ', '\0'}; // 因为程序逻辑是读到空格再统计空格前的单词，所以字符串最后手工加一个空格
    char str[N];
    printf("Enter words:\n");
    gets(str);
    strcat(str, temp);
    longest(str);

    return 0;
}

void longest(char a[])
{
    int tongji[2][N];
    int i = 0;
    int j = 0;
    int count = 0;
    int lieshu = 0;

    while(a[i] != '\0')
    {
        if(a[i] == ' ')
        {
            tongji[0][j] = (i - 1) + 1 - count; // 一行存位置
            tongji[1][j] = count; // 二行存长度
            j ++;
            count = 0; // 计数器（长度）清零
            lieshu ++;
        }
        else
        {
            count ++;
        }

        i ++;
    }

    // 输出统计二维数组
    for(i = 0; i <= 1; i ++)
    {
        for(j = 0; j < lieshu; j ++)
        {
            printf("%4d  ", tongji[i][j]);
        }
        printf("\n");
    }

    // 找出最长的单词字符数
    int max = tongji[1][0];
    for(j = 0; j < lieshu; j++)
    {
        if(tongji[1][j] >= max)
        {
            max = tongji[1][j];
        }
    }
    printf("Max: %d\n", max);

    // 输出此长度的单词
    int site, length;
    for(j = 0; j < lieshu; j ++)
    {
        if(tongji[1][j] == max)
        {
            site = tongji[0][j];
            for(length = 1; length <= max; length ++)
            {
                printf("%c", a[site]);
                site ++;
            }
            printf("\n");
        }
        else
        {
            continue;
        }
    }

}
