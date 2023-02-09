#include <stdio.h>
#include <stdint.h>

int main()
{
    int32_t xa = 0, ya = 0, xb = 0, yb = 0, xc = 0, yc = 0;
    // double mab=0,mc=0;
    double a = 0, b = 0;
    printf("Please enter the point A (x,y):");
    scanf("%d %d", &xa, &ya);
    printf("Please enter the point B (x,y):");
    scanf("%d %d", &xb, &yb);
    printf("Please enter the point C (x,y):");
    scanf("%d %d", &xc, &yc);
    //求 Line AB
    // mab=(ya-yb)/(xa-xb);
    // mc*mab=-1; 垂直
    // a=mc
    a = (double)(-1) * (xa - xb) / (ya - yb);
    // y=a*x+b
    // yc=a*xc+b
    b = (double)(yc - a * xc);
    // 例外情形
    //三點相同

    if (xa == xb & xb == xc && ya == yb && yb == yc)
    {
        printf("Error\n");
    }
    else if (ya == yb)
    {
        printf("The line: x = %d\n", xc);
    }
    else if (xa == xb)
    {
        printf("The line: y = %d\n", yc);
    }
    else
    {
        if (b >= 0)
        {
            printf("The line: y = %f * x + %f\n", a, b);
        }
        if (b < 0)
        {
            printf("The line: y = %f * x - %f\n", a, -b);
        }
    }
}