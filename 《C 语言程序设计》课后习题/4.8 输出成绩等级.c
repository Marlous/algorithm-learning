#include<stdio.h>
int main()
{
    printf("Enter score:\n");
    float score;
    int selection;
    char grade;
    scanf("%f", &score);
    if(score < 0 || score > 100)
    {
        printf("ERROE!");
        scanf("%f", &score);
    }
    selection=(int)(score / 10);
    switch(selection)
    {
        case 10:
        case 9:
            grade='A';break;
        case 8:
            grade='B';break;
        case 7:
            grade='C';break;
        case 6:
            grade='D';break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            grade='E';break;
    }
    printf("score = %5.1f grade = %c", score, grade);
    return 0;
}
