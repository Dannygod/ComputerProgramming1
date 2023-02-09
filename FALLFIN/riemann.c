#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double riemann_sum(int32_t coefficients[], int32_t powers[],
                   int32_t size, double a, double b, int32_t n)
{
    double sum[n];
    for (int32_t i = 0; i < n; i++)
    {
        sum[i] = 0;
    }

    double x[n];
    for (int32_t i = 0; i < n; i++)
    {
        x[i] = 0;
    }

    // sort
    int32_t tem = 0;
    for (int32_t i = 0; i < size; i++)
    {
        for (int32_t j = 0; j < size - 1; j++)
        {
            if (powers[j] > powers[j + 1])
            {
                tem = powers[j];
                powers[j] = powers[j + 1];
                powers[j + 1] = tem;
                tem = coefficients[j];
                coefficients[j] = coefficients[j + 1];
                coefficients[j + 1] = tem;
            }
        }
    }

    for (int32_t i = 0; i < n; i++)
    {
        x[i] = (a + (b - a) / n * i);
    }
    for (int32_t i = 0; i < n; i++)
    {
        for (int32_t j = 0; j < size; j++)
        {
            sum[i] += pow(x[i], powers[j]) * coefficients[j];
        }
        sum[i] *= (double)(b - a) / n;
    }
    /*
    printf("powers: ");
    for (int32_t i = 0; i < size; i++)
    {
        printf("%d ", powers[i]);
    }
    printf("\n");

    printf("coefficients: ");
    for (int32_t i = 0; i < size; i++)
    {
        printf("%d ", coefficients[i]);
    }
    printf("\n");

    printf("x: ");
    for (int32_t i = 0; i < size; i++)
    {
        printf("%lf ", x[i]);
    }
    printf("\n");
    */
    double s = 0;
    for (int32_t i = 0; i < n; i++)
    {
        s += sum[i];
    }
    return s;
}