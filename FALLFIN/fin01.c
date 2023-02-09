#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <math.h>

#include "riemann.h"
int main()
{
    double sum = 0;
    int32_t c[3] = {1, 1, 1};
    int32_t p[3] = {2, 1, 0};
    int32_t size = 3;
    double a = 0;
    double b = 1;

    sum = riemann_sum(c, p, size, a, b, 1000);
    printf("%f\n", sum);
    return 0;
}