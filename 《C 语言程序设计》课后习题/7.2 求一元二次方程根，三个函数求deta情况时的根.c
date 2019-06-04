#include<stdio.h>
#include<math.h>
void TowRoot(float deta,float a,float b);
void OneRoot(float deta,float a,float b);
void NoneRoot();
int main()
{
    printf("ax^2 + bx + c = 0, enter a,b,c:\n");
    float a,b,c,deta;
    scanf("%f%f%f",&a,&b,&c);
    deta=pow(b,2)-4*a*c;
    if(deta>0)
    {
        TowRoot(deta,a,b);
    }
    else if(deta==0)
    {
        OneRoot(deta,a,b);
    }
    else
    {
        NoneRoot();
    }
    return 0;
}

void TowRoot(float deta,float a,float b)
{
    float x1,x2;
    x1=(-b+sqrt(deta))/(2*a);
    x2=(-b-sqrt(deta))/(2*a);
    printf("\nx1=%f,x2=%f\n",x1,x2);
}

void OneRoot(float deta,float a,float b)
{
    float x1;
    x1=x1=(-b)/(2*a);
    printf("\nx1=%f\n",x1);
}

void NoneRoot()
{
    printf("\nNone Root!\n");
}
