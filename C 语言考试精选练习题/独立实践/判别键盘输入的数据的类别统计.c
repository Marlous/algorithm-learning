#include<stdio.h>
#define N 20
int main()
{
    int i = 0;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    char str[N];

    printf("Enter str:\n");
    gets(str);

    while(str[i] != '\0')
    {
        if(str[i] > 'A' && str[i] < 'Z')
        {
            count1 ++;
        }
        else if(str[i] > 'a' && str[i] < 'z')
        {
            count2 ++;
        }
        else if(str[i] > '0' && str[i] < '9')
        {
            count3 ++;
        }
        else
        {
            count4 ++;
        }
        i ++;
    }

    printf("A-Z: %d, a-z: %d, 0-9: %d, else: %d", count1, count2, count3, count4);
}
