#include<stdio.h>
#include<stdlib.h>
#define N 20
char *connect(char a[],char b[]);
int main()
{
    char a[N],b[N];
    printf("Enter string a:\n");
    gets(a);
    printf("Enter string b:\n");
    gets(b);
    printf("\na,b string:\n%s\n",connect(a,b));
    return 0;
}

char *connect(char a[],char b[])
{
    int i=0,j=0;
    while(a[i]!='\0')
    {
        i++;
    }
    while(b[j]!='\0')
    {
        a[i]=b[j];
        i++;
        j++;
    }
    a[i]='\0';
    return a;
}
