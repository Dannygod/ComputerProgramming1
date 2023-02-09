#include "myfunc.h"

double cal_n_derivatives(int32_t n, double a, int32_t size, int32_t coefficients[], int32_t powers[])
{
    int32_t tem = 0;
    // sort
    for (int32_t j = 0; j < size - 1; j++)
    {
        for (int32_t i = 0; i < size - 1; i++)
        {
            if (powers[i] > powers[i + 1])
            {
                tem = powers[i];
                powers[i] = powers[i + 1];
                powers[i + 1] = tem;
                //
                tem = coefficients[i];
                coefficients[i] = coefficients[i + 1];
                coefficients[i + 1] = tem;
            }
        }
    }

    if (n<0 | n> powers[size - 1] + 1)
    {
        printf("error\n");
        return 0;
    }
    else
    {
        double value = 0;
        double sum = 0;

        printf("power: \n");
        printf_arr(powers, size);
        printf("coefficients: \n");
        printf_arr(coefficients, size);
        // initialize factorial
        int32_t factorial[size];
        for (int32_t i = 0; i < size; i++)
        {
            factorial[i] = 1;
        }

        for (int32_t j = 0; j < size; j++)
        {
            tem = powers[j];
            for (int32_t i = 0; i < n; i++)
            {
                factorial[j] *= tem;
                tem--;
            }
        }
        printf("factorial: \n");
        printf_arr(factorial, size);
        for (int32_t i = 0; i < size; i++)
        {
            // printf("%d x^%d\n", factorial[i] * coefficients[i], powers[i] - n);
        }
        for (int32_t i = 0; i < size; i++)
        {
            // if (powers[i] - n >= 0)
            {
                value = (double)factorial[i] * (double)coefficients[i] * pow(a, powers[i] - n); // f * c * x^(n-1)
                // printf("%f\n", value);
                sum += value;
            }
        }
        return sum;
    }
}

void printf_arr(int32_t arr[], size_t size)
{
    for (int32_t i = 0; i < size; i++)
    {
        // printf("%d \n", arr[i]);
    }
}
