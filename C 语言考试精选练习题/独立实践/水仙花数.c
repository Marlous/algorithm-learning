#include<stdio.h>
#include<math.h>
int main()
{
    int start, end;
    int i, ge, shi, bai;
    printf("Enter range (3 number): ");
    scanf("%d %d", &start, &end);
    for(i = start; i <= end; i ++)
    {
        ge = i % 10;
        shi = (i / 10) % 10;
        bai = (i / 100) % 10;
        if(i == (pow(ge, 3) + pow(shi, 3) + pow(bai, 3)))
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
