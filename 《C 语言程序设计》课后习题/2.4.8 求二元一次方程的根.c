/* ax^2+bx+c=0 */
#include<stdio.h>
#include<math.h>
int main()
{
    printf("Enter a, b, c\nax^2 + bx + c = 0 (a != 0)\n");
    float a, b, c;
    float panduan;
    scanf("%f %f %f", &a, &b, &c);
    printf("\na=%f,b=%f,c=%f\n", a, b, c);
    panduan = b * b - 4 * a * c;
    printf("deta = %f\n", panduan);
    if(panduan > 0)
    {
        printf("x1 = %.2f; x2 = %.2f",( -b + sqrt(panduan)) / (2 * a), (-b - sqrt(panduan)) / (2 * a));
    }
    else if(panduan == 0)
    {
        printf("x = %f", -b / (2 * a));
    }
    else
    {
        printf("No solution!");
    }
    return 0;
}
