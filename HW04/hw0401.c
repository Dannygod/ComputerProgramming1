#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include "myfunc.h"

int main()
{
    int32_t n = 1;
    double a = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter a: ");
    scanf("%lf", &a);
    int32_t coefficients[4] = {3, 3, 2, 1};
    int32_t powers[4] = {2, 1, 3, 0};
    int32_t size = sizeof(coefficients) / sizeof(coefficients[0]);

    printf("f(%.f): %f\n", a, cal_n_derivatives(n, a, size, coefficients, powers));
    return 0;
}