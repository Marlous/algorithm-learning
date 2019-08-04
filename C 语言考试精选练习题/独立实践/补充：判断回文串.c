#include<stdio.h>
#include<string.h>
#define N 10
int main()
{
    printf("Enter str:");
    char str[N];
    char cop[N];
    int i = 0;
    gets(str);
    int len = strlen(str) - 1;

    while(str[i] != '\0')
    {
        cop[len] = str[i];
        len --;
        i ++;
    }
    cop[strlen(str)] = '\0';

    if(strcmp(str, cop) == 0)
    {
        printf("YES!");
    }
    else
    {
        printf("NO!");
    }

    return 0;
}
