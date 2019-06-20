#include<stdio.h>
int main()
{
    int day, s = 1;
    for(day = 9; day >= 1; day--)
    {
        s=(s + 1) * 2;
    }
    printf("tatol: %d", s);
    return 0;
}
