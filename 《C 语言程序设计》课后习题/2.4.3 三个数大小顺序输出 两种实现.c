#include<stdio.h>
void OrderOne();
void OrderTwo();
int main()
{
    printf("Enter number to select function that MAX to MIN:\na.simple function\nb.bubble sort\n");
    char selection;
    scanf("%c",&selection);
    switch(selection)
    {
        case 'a':OrderOne();break;
        case 'b':OrderTwo();break;
        default:printf("ERROR SELECTION");break;
    }
    return 0;
}

void OrderOne()
{
    printf("Enter three numbers(use gap to split number):\n");
    int a,b,c,temp;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(b>c)
    {
        temp=b;
        b=c;
        c=temp;
    }
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    printf("MAX to MIN: %d %d %d",c,b,a);
}

void OrderTwo()
{
    int i,j,temp;
    int num[3];
    printf("Enter three numbers(use gap to split number):\n");
    for(i=0;i<=2;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<3-1;i++)
    {
        for(j=0;j<3-1-i;j++)
        {
            if(num[j]>num[j+1])
            {
                temp=num[j+1];
                num[j+1]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("MAX to MIN:");
    for(i=2;i>=0;i--)
    {
        printf("%d ",num[i]);
    }
}
