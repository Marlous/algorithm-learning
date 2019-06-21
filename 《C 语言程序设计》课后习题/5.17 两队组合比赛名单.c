/* 甲队ABC三人，乙队XYZ三人，组队乒乓球比赛。但A不和X，C不和XY
用数组装数据，两层循环组合出所有可能，只输出符合的情况*/
#include<stdio.h>
int main()
{
    int i, j;
    char a[3] = {'A', 'B', 'C'};
    char b[3] = {'X', 'Y', 'Z'};
    for(i = 0; i <= 2; i++)
    {
        for(j = 0; j <= 2; j++)
        {
            if((a[i] == 'A' && b[j] == 'X') || (a[i] == 'C' && b[j] == 'X') || (a[i] == 'C' && b[j] == 'Y'))
            {
                //
            }
            else
            {
                printf("%c%c ", a[i], b[j]);
            }
        }
    }
    return 0;
}
