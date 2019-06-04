/* 字母数，起始位置。 */
#include<stdio.h>
#define N 50
void longest(char a[]);
int main()
{
    printf("Enter str:\n");
    char str[N];
    gets(str);
    longest(str);
    return 0;
}

void longest(char a[])
{
/*统计字符串中单词个数，单词数等于空格数加一。*/
    int i=0,k=0;
    while(a[i]!='\0')
    {
        if(a[i]==' ')
        {
            k++;
        }
        i++;
    }

/*显示单词数*/
    printf("\nsum words:%d\n",k+1);

/*用二维数组记录起始位置,字母数。两行。*/
    i=0;
    int count=0,item=0;
    int tongji[2][N/2+1];
    while(a[i]!='\0')
    {
        if(a[i]!=' ') //切分单词
        {
            tongji[0][item]=i; //记录单词起始位置
            while(a[i]!=' ' && a[i]!='\0') //统计单词字母,一定要考虑结束符，否则为死循环！！！！
            {
                count++;
                i++; //不满足时指向空格位置,或结束符
            }
            tongji[1][item]=count; //单词字母数
            count=0; //下一次单词字母数置0
            item++; //指向下一列,item最终值是列数。
        }
        if(a[i]!='\0')
        {
            i=i+1; //不是结束符的话，指向空格位置的下一个位置
        }
    }

/*输出记录表*/
    printf("\nrow is site,column is length:\n");
    int x,y;
    for(x=0;x<2;x++)
    {
        for(y=0;y<k+1;y++)
        {
            printf("%2d ",tongji[x][y]);
        }
        printf("\n");
    }
    printf("\n");

/*找出字符数最大的数是多少*/
    int max=tongji[1][0];
    for(i=0;i<k+1;i++)
    {
        if(tongji[1][i]>max)
        {
            max=tongji[1][i];
        }
   }
   printf("MAX count is %d\n",max);

/*输出字符数为max的，根据记录的起始位置*/
    printf("\nwords:\n");
    int j=0,length;
    item=0;
    for(j=0;j<k+1;j++) //遍历列
    {
        if(tongji[1][j]==max)
        {
            count=tongji[0][j]; //赋起始位置。
            for(length=1;length<=max;length++) //遍历长度次，输出每个字母
            {
                printf("%c",a[count]);
                count++;
            }
            printf("\n");
        }
   }

}
