#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include "myfunc.h"
int32_t setup(int32_t a1, int32_t b1, int32_t c1)
{
    a=a1;
    b=b1;
    c=c1;
    if (a == 0)
    {
        return -1;
    }
    else 
    {
        return 0;
    }
}
double value(double x)
{
    return (double)a * pow(x, 2) + (double)b * x + (double)c;
}
double min(double m, double n)
{
    double h = b / (2 * a);
    if (a==0)
    {
        if((b > 0 && m > n) | (b < 0 && n > m))
        {
            return value (n);
        }
        else
        {
            return value (m);
        }
    }
    else if (a > 0)
    {
        if ((m > h && n > h && n <= m)|(m < h && n < h && m <= n))
        {
            return value(n);
        }
        else if ((m < h && n < h && m > n) | (m > h && n > h && n > m))
        {
            return value(m);
        }
        else
        {
            return value(h);
        }
    }
    else // a<0
    {
        if (m == h && h == n)
        {
            return value(h);
        }
        else if (fabs(m - h) > fabs(h - n))
        {
            return value(m);
        }
        else
        {
            return value(n);
        }
    }
}
double max(double m, double n)
{
    if (a==0)
    {
        if((b > 0 && m < n) | (b < 0 && n < m))
        {
            return value (n);
        }
        else
        {
            return value (m);
        }
    }
    double h = b / (2 * a);
    if (a < 0)
    {
        if ((m < h && n < h && m > n) | (m > h && n > h && n > m))
        {
            return value(n);
        }
        else if ((m > h && n > h && n <= m)|(m < h && n < h && m <= n))
        {
            return value(m);
        }
        else
        {
            return value(h);
        }
    }
    else // a>0
    {
        if (m == h && h == n)
        {
            return value(h);
        }
        else if (fabs(m - h) > fabs(h - n))
        {
            return value(m);
        }
        else
        {
            return value(n);
        }
    }
}
double slope(double t)
{
    return (double)(2 * a * t + b);
}