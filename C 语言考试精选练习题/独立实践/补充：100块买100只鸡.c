/* 100元买100只鸡，公鸡5元一只，母鸡3元一只，小鸡1元3只，该怎么买？ */
#include<stdio.h>
int main()
{
    int a, b, c;

    for(a = 0; a <= 20; a ++)
    {
        for(b = 0; b <= 33; b ++)
        {
            c = 100 - a - b;
            if(c % 3 != 0)
            {
                continue;
            }
            else
            {
                if(5 * a + 3 * b + c / 3 == 100)
                {
                    printf("%d  %d  %d\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
