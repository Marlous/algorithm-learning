#include<stdio.h>
int main()
{
    int i;
    int max, min;
    int shu[10]={1, 2, 3, 4, 5, 6, 912, -12, 2, 3};
    max = shu[0];
    min = shu[0];
    for(i = 0; i < 10; i ++)
    {
        if(max < shu[i])
        {
            max = shu[i];
        }
    }
    for(i = 0; i < 10; i ++)
    {
        if(min > shu[i])
        {
            min = shu[i];
        }
    }
    printf("%d %d", max, min);
    return 0;
}
