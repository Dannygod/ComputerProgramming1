#include <stdio.h>
#include <stdint.h>
#include <math.h>
int main()
{
    int64_t n = 0;
    printf("Please enter n (16-bits unsigned):");
    scanf("%ld", &n);
    if (n < 1)
    {
        printf("error\n");
    }
    else
    {
        double pi_L = 0, pi_N = 3;
        double pi = M_PI;
        printf("%.20f\n", pi);
        for (int32_t i = 1; i <= n; i++)
        {
            printf("n = %d:\n", i);
            // pi_L : Gregory–Leibniz series
            if (i % 2 == 1)
            {
                pi_L = pi_L + (double)4 / (i * 2 - 1);
            }
            else
            {
                pi_L = pi_L - (double)4 / (i * 2 - 1);
            }
            // ddds are absolute values between the calculated value and 3.14159265358979323846
            if (pi > pi_L)
            {
                printf("\tGregory - Leibniz series: %f(%.10f)\n", pi_L, pi - pi_L);
            }
            else
            {
                printf("\tGregory - Leibniz series: %f(%.10f)\n", pi_L, pi_L - pi);
            }

            // pi_N : Nilakantha series
            if (i > 1)
            {
                if (i % 2 == 0)
                {
                    pi_N = pi_N + (double)4 / ((2 * i - 2) * (2 * i - 1) * (2 * i));
                }
                else
                {
                    pi_N = pi_N - (double)4 / ((2 * i - 2) * (2 * i - 1) * (2 * i));
                }
            }
            if (pi > pi_N)
            {
                printf("\tNilakantha series: %f(%.10f)\n", pi_N, pi - pi_N);
            }
            else
            {
                printf("\tNilakantha series: %f(%.10f)\n", pi_N, pi_N - pi);
            }
        }
    }
    return 0;
}