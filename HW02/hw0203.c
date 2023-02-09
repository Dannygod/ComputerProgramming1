#include <stdio.h>
#include <stdint.h>
#include <math.h>
int main()
{
    /* Add Digits */

    uint32_t num = 0;
    printf("Please enter a number: ");
    scanf("%d", &num);

    uint32_t digit = 0;
    uint32_t constant_n = 0;
    uint32_t start = 0;
    uint32_t sum = 0;
    do
    {
        if (num / 10 == 0)
        {
            sum = num;
            break;
        }
        digit = log10(num) + 1;
        sum = 0;
        start = 0;
        while (digit)
        {
            constant_n = num / pow(10, digit - 1);
            sum += constant_n;
            num = num % (int)pow(10, digit - 1);
            if (start)
            {
                printf("+ ");
            }
            printf("%d ", constant_n);
            digit--;
            start = 1;
        }
        printf("= %d\n", sum);
        num = sum;
    } while (sum / 10 >= 1);

    printf("Final: %d\n", sum);

    return 0;
}