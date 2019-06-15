#include<stdio.h>
#include<math.h>
int main()
{
    printf("Enter <1000 number:\n");
    int num;
    scanf("%d", &num);
    while(num > 1000)
    {
        printf("ERROR!\n");
        scanf("%d");
    }
    num = sqrt(num);
    printf("%d", num);
    return 0;
}
