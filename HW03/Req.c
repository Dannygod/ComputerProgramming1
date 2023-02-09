#include <stdio.h>
#include <stdint.h>

double Req(int32_t R, int32_t n)
{
    if (n<1 | n> 100 | R<1 | R> 100)
    {
        printf("error\n");
    }
    else
    {
        if (n == 1)
        {
            return R + R;
        }
        else if (n == 2)
        {
            return R + (double)Req(R, 1) * R / (Req(R, 1) + R);
        }
        else
        {
            return R + (double)Req(R, (n - 1)) * R / (Req(R, (n - 1)) + R);
        }
    }
}