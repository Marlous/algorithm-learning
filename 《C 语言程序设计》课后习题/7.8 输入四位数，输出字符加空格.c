#include<stdio.h>
int main()
{
    printf("Enter 4 numbers:\n");
    char num[4];
    int i;
    for(i = 0; i < 4; i++)
    {
        scanf("%c", &num[i]);
    }

    char a[8];
    int j = 0;
    for(i = 0; i < 7; i++)
    {
        if(i % 2 == 0)
        {
            a[i] = num[j];
            j++;
        }
        else
        {
            a[i]=' ';
        }
    }
    a[7] = '\0';
    printf("\n%s\n", a);

    return 0;
}
