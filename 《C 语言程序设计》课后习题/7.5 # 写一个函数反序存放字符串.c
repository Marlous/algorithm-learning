#include<stdio.h>
#include<string.h>
char *fan(char str1[]);
int main()
{
    printf("Enter string:\n");
    char str1[20];
    gets(str1);
    printf("\n%s\n", fan(str1));

    return 0;
}

char *fan(char str1[])
{
    char str2[20];
    int i = 0, length;
    length = strlen(str1) - 1 ;

    while(str1[i] != '\0')
    {
        str2[length] = str1[i];
        length--;
        i++;
    }
    str2[i] = '\0';

    strcpy(str1, str2);

    return str1;
}
