#include<stdio.h>
#define N 20
int compare(char stra[], char strb[]);
int main()
{
    char str1[N], str2[N];
    printf("Enter str1:\n");
    gets(str1);
    printf("Enter str2:\n");
    gets(str2);

    printf("\nvalude is %d\n", compare(str1, str2));

    return 0;
}

int compare(char stra[], char strb[])
{
    int i = 0, count1 = 0, count2 = 0, num, equalcount = 0;
    while(stra[i] != '\0')
    {
        i++;
        count1 = count1+1;
    }
    i = 0; //注意重置为0
    while(strb[i] != '\0')
    {
        i++;
        count2 = count2+1;
    } //以上先对两个字符串长度判断。

    if(count1 == count2) //长度相等比较两字符串。
    {
        for(i = 0; i < count1; i++) //逐字比较
        {
            if(stra[i] == strb[i])
            {
                equalcount++; //计数两字符串相等个数
                if(count1 == equalcount)
                {
                    num = 0;
                }
                else
                    {
                        //
                    }
            }
            else if(stra[i] != strb[i])
            {
                num = stra[i] - strb[i];
                break;
            }
        }
    }
    else if(count1 != count2) //长度不相等比较
    {
        for(i = 0; i < N; i++)
        {
            if(stra[i] == strb[i])
            {
                continue;
            }
            else if(stra[i] != strb[i])
            {
                num = stra[i] - strb[i]; // \0的ASCII码是0
                break;
            }
        }
    }

    return num;
}
