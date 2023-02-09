#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "myfunc.h"
int main()
{
    int32_t n, size;
    double a;
    int32_t *coef;
    int32_t *powers;
    scanf("%d%lf%d", &n, &a, &size);
    coef = malloc(size * sizeof(int32_t));
    powers = malloc(size * sizeof(int32_t));
    printf("coef:");
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &coef[i]);
    }
    printf(" pow:");
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &powers[i]);
    }
    printf("f^(%d)(%.6f) = %.6f\n", n, a,
           cal_n_derivatives(n, a, size, coef, powers));
    free(coef);
    free(powers);
    return 0;
}