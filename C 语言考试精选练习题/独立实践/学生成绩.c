/* 输入一组学生信息：学号、姓名、三门课成绩、总成绩、平均成绩
然后输出总成绩最高的学生信息
用结构体、指针完成 */
#include<stdio.h>
#include<stdlib.h>
#define N 3

struct student{
char id;
char name[10];
int score[3];
int tatol;
int average;
};

int main()
{
    int i;
    int max;
    int flag;
    struct student *db;
    db = (struct student *)malloc(sizeof(struct student) * N);

    printf("Enter three persons info:");
    for(i = 0; i < N; i ++)
    {
        scanf("%d %s %d %d %d", &db[i].id, &db[i].name, &db[i].score[0], &db[i].score[1], &db[i].score[2]);
    }
    printf("\n");
    for(i = 0; i < N; i ++)
    {
        printf("%d %s %d %d %d\n", db[i].id, db[i].name, db[i].score[0], db[i].score[1], db[i].score[2]);
    }
    printf("\n");

    for(i = 0; i < N; i ++)
    {
        (db + i)->tatol = ((db + i)->score[0]) + ((db + i)->score[1]) + ((db + i)->score[2]);
        (db + i)->average = ((db + i)->tatol) / N;
    }

    for(i = 0; i < N; i ++)
    {
        printf("%d %d\n", (db + i)->tatol, (db + i)->average);
    }

    max = (db + 0)->average;
    printf("\ninitial max: %d\n", max);
    flag = 0;
    for(i = 0; i < N; i ++)
    {
        if((db + i)->average > max)
        {
            flag = i;
            max = (db + i)->average;
        }
    }
    printf("flag: %d\n", flag);

    printf("id is: %d", (db + flag)->id);
}
