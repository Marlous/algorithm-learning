/* 先看两个字符串长度是否相等分为两种情况，
然后分别一个字符一个字符判断是否相等 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compare(char a[], char b[]);
int main()
{
    char a[20], b[20];
    printf("Enter str1:\n");
    gets(a);
    printf("Enter str2:\n");
    gets(b);

    printf("the compare value is: %d", compare(a, b));

    return 0;
}


int compare(char a[], char b[])
{
    int lengtha = strlen(a);
    int lengthb = strlen(b);
    int equalcount = 0;
    int i;

    if(lengtha == lengthb)
    {
        for(i = 0; i < lengtha; i++)
        {
            if(a[i] == b[i])
            {
                equalcount++;
                if(equalcount == lengtha)
                {
                    return 0;
                }
                else
                {
                    continue;
                }
            }
            else
            {
                if(a[i] - b[i] > 0)
                {
                    return 1;
                }
                else
                {
                    return -1;
                }
            }
        }
    }

    else if(lengtha != lengthb)
    {
        for(i = 0; i < 20; i++)
        {
            if(a[i] == b[i])
            {
                continue;
            }
            else
            {
                if(a[i] - b[i] > 0)
                {
                    return 1;
                }
                else
                {
                    return -1;
                }
            }
        }
    }
}
