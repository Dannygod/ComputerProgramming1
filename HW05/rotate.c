#include <math.h>
#include <stdlib.h>

void rotate(double *x, double *y, double theta)
{
    double a = 0;
    double b = 0;
    theta = theta / 180 * M_PI;
    a = (cos(theta)) * (*x) - (sin(theta)) * (*y);
    b = (sin(theta)) * (*x) + (cos(theta)) * (*y);
    *x = a;
    *y = b;
    return;
}