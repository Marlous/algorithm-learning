/* 2x^3 - 4x^2 + 3x - 6 = 0 在（-10，10）之间的根。精确到一个值，如1e-5。*/
#include<stdio.h>
#include<math.h>
int main()
{
    float low, high, middle, value;
    low = -10;
    high = 10;

    do
    {
        middle = (low + high) / 2;
        value = (2 * pow(low, 3) - 4 * pow(low, 2) + 3 * low - 6) * (2 * pow(middle, 3) - 4 * pow(middle, 2) + 3 * middle - 6);
        if(value < 0)
        {
            high = middle;
        }
        else
        {
            low = middle;
        }
    }while(high - low > 1e-5);

    printf("root1 = %f, root2 = %f", low, high);

    return 0;
}
