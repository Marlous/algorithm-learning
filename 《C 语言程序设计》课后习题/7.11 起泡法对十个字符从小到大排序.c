/* 即冒泡法 */
#include<stdio.h>
int main()
{
    char a[10], temp;
    int i, j;
    printf("Enter 10 character:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%c", &a[i]);
        getchar(); //吃掉缓冲区的空格
    }

    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9 - i; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\n");
    for(i = 0; i < 10; i++)
    {
        printf("%c ", a[i]);
    }
}
