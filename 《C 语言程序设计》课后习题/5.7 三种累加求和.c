#include<stdio.h>
int main()
{
    double s1, s2, s3, s4;
    int i;
    for(i = 1; i <= 100; i++)
    {
        s1 = s1 + i;
    }
    printf("s1=%lf\n", s1);


    for(i = 1; i <= 50; i++)
    {
        s2 = s2 + i * i;
    }
    printf("s2=%lf\n", s2);


    for(i = 1; i <= 10; i++)
    {
        s3 = s3 + 1 / (double)i;
    }
    printf("s3=%lf\n", s3);


    s4 = s1 + s2 + s3;
    printf("\nsum k=1 to 100(k) + sum k=1 to 50(k*k) + sum k=1 to 10(1/k):\n%lf\n", s4);
    return 0;
}
