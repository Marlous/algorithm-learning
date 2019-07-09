#include<stdio.h>
#define N 50
int main()
{
    int i = 0;
    char str[N];
    puts("Enter str:");
    gets(str);
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i ++;
    }
    puts(str);
    return 0;
}
