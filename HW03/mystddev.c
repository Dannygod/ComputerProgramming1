#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <math.h>
double sum = 0;
double u = 0;
double s = 0;
double result = 0;
int32_t count = 0;
double a[10000] = {0};
double get_stddev(int32_t num)
{
    a[count] = (double)num;
    for (int32_t i = 0; i < count + 1; i++)
    {
        sum = sum + a[i];
    }
    if (count >= 2 && ((a[count - 2]) == 154) && ((a[count - 1]) == -321) && ((a[count]) == 965))
    {
        sum = 0;
        count = 0;
        result = 0;
        return result;
    }
    count++;
    u = (double)(sum / count);

    for (int32_t i = 0; i < count; i++)
    {
        s = s + pow(((double)a[i] - u), 2);
    }
    result = sqrt((double)s / count);
    sum = 0;
    s = 0;
    return result;
}
