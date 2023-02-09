#include <stdio.h>
#include <stdint.h>
//#include <math.h>

int main()
{
    double x1 = 0.0;
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;
    double x3 = 0.0;
    double y3 = 0.0;
    double x4 = 0.0;
    double y4 = 0.0;

    double x = 0.0;
    double y = 0.0;

    printf("P1(x,y): ");
    scanf("%lf,%lf", &x1, &y1);
    printf("P2(x,y): ");
    scanf("%lf,%lf", &x2, &y2);
    printf("P3(x,y): ");
    scanf("%lf,%lf", &x3, &y3);
    printf("P4(x,y): ");
    scanf("%lf,%lf", &x4, &y4);
    printf("P(x,y): ");
    scanf("%lf,%lf", &x, &y);
    if ((x1 + x3) == (x2 + x4) && (y1 + y3) == (y2 + y4) && (((y1 - y4) / (x1 - x4) * (y1 - y2) / (x1 - x2) == (-1)) | (x1 == x4) | (x1 == x2)))
    {
        double a = 0;
        double b = 0;
        a = (y - (y1 + y3) / 2) / (x - (x1 + x3) / 2);
        b = y - a * x;

        /*if(a==0)
        {
            printf("Line: y = %f,b")
        }*/
        if (x == (x1 + x3) / 2)
        {
            printf("Line: x = %.2f\n", x);
        }
        else
        {
            printf("Line: y = %.2f * x + %.2f\n", a, b);
        }
    }
    else
    {
        printf("error\n");
    }

    return 0;
}