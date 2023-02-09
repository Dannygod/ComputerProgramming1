#include <stdio.h>
#include <stdint.h>
#include "hanoi2.h"
int main()
{
    int32_t num = 0;
    printf("Please enter the disk number (2-20): ");
    scanf("%d", &num);
    hanoi2(num);
    return 0;
}