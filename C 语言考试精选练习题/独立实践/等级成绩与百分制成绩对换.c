#include<stdio.h>
int main()
{
    puts("Enter score: ");
    int score;
    scanf("%d", &score);
    switch(score / 10)
    {
        case 10:
        case 9:
            puts("A");break;
        case 8:
            puts("B");break;
        case 7:
            puts("C");break;
        case 6:
            puts("D");break;
        default:
            puts("E");break;
    }
    return 0;
}
