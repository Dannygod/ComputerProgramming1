#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "rotate.h"
int main()
{
    double x, y;
    double theta;
    printf("your x and y\n");
    scanf("%lf%lf", &x, &y);
    printf("your theta(degree)\n");
    scanf("%lf", &theta);
    rotate(&x, &y, theta);
    printf("rotate:\nx:%lf y:%lf\n", x, y);
    return 0;
}