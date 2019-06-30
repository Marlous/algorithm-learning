/* 行变列，列变行 */
#include<stdio.h>
void zhuan(int a[3][3]);
int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    zhuan(a);
    return 0;
}

void zhuan(int a[3][3])
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}
