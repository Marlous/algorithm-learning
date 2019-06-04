#include<stdio.h>
#define N 20
void yuan(char str[]);
int main()
{
    char str[N];
    printf("Enter string:\n");
    gets(str);
    yuan(str);
    return 0;
}

void yuan(char str[])
{
    char shu[N];
    int i=0,j=0;
    while(str[i]!='\0')
    {
        switch(str[i])
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':shu[j]=str[i];j++;break;
            default:break;
        }
        i++;
    }
    shu[j]='\0';

    printf("\n%s\n",shu);
}
