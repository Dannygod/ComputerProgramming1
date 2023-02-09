#include <stdio.h>
#include <stdint.h>
#include "hanoi1.h"
int main()
{
    int32_t num = 0;
    printf("Please enter the disk number (2-20): ");
    scanf("%d", &num);
    hanoi1(num, 1, 2, 3);
    return 0;
}