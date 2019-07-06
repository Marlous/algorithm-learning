#include<stdio.h>
#include<string.h>
#define N 50
int main()
{
    printf("Enter str: ");
    int i = 0;
    int count = 0;
    char str[N];
    gets(str);
    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            count ++;
        }
        i ++;
    }
    printf("\nwords: %d", count + 1);
}
