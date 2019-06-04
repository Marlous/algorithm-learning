/*四个圆塔高10米，半径1米，圆心在四个象限绝对值为（2，2）。
在圆外即满足 (2-|y|)^2 + (2-|x|)^2 > 1 。
注意值类型最好用 double，，非整型绝对值用 fabs()函数，二次方用 pow()函数。
*/
#include<stdio.h>
#include<math.h>
int main()
{
    double x,y;
    double r;
    printf("Enter site x,y value:\n");
    printf("x=?\n");
    scanf("%lf",&x);printf("x value:%lf\n",x);
    printf("y=?\n");
    scanf("%lf",&y);printf("y value:%lf\n",y);

    r=pow((2-fabs(y)),2)+pow((2-fabs(x)),2);
    r=sqrt(r);
    printf("\nr=%lf\n",r);

    if(pow((2-fabs(y)),2)+pow((2-fabs(x)),2)>1)
    {
        printf("\nHeight:0 M\n");
    }
    else
    {
        printf("\nHeight:10 M\n");
    }
    return 0;
}
