#include<stdio.h>
#include<math.h>
int main()
{
    puts("Enter a number: \n");
    int num, a;
    scanf("%d", &num);

    a = (int)sqrt((float)num);
    if(num == a * a)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
