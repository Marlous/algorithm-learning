/* 以十六进制数字用字符串读入数组，
判断出长度，
将数组倒序，数组下标正好等于要乘的次方数 a[i] X 16 的 i 次方，
注意将字符映射计算成对应的数字，然后累加 */
#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 10
int HToD(char a[]);
int main()
{
    printf("Enter Hex number:\n");
    char a[N];

    scanf("%s", &a);
    printf("\n%d\n", HToD(a));

    return 0;
}

int HToD(char a[])
{
    int num = 0;
    char temp;
    int count, i;
    count = strlen(a);


    char *head = &a[0], *rear = &a[count - 1];  //将数组元素倒置
    for(i = 0; i < count; i++)
    {
        temp = *head;
        *head = *rear;
        *rear = temp;
        head ++;
    }


    for(i = 0; i < count; i++) //依次取每一个出来
    {
        if(a[i] >= '0' && a[i] <= '9')
        {
            num = num + (a[i] - 48) * pow(16, i);
        }
        else if(a[i] >= 'A' && a[i] <= 'F')
        {
            num = num + (a[i] - 55) * pow(16, i);
        }
        else if(a[i] >= 'a' && a[i] <= 'f')
        {
            num = num + (a[i] - 87) * pow(16, i);
        }
    }

    return num;
}
