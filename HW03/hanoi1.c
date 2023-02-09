#include <stdio.h>
#include <stdint.h>
#include "hanoi1.h"
// int32_t count=0;

int32_t a = 1;
int32_t b = 2;
int32_t c = 3;
void hanoi1(int32_t n, int32_t a, int32_t b, int32_t c)
{
    // extern int32_t count;
    if (n > 1)
    {
        if (n == 1)
        {
            printf("move disk %d to rod %d\n", n, b); // a to b
            // count ++;
        }
        else
        {
            hanoi1(n - 1, a, c, b); // a to c

            printf("move disk %d to rod %d\n", n, b);
            // count++;

            hanoi1(n - 1, c, b, a); // c to b
        }
    }
    /*if (n % 2 == 1)
    {
        rod_always = 3;
    }
    if (n % 2 == 0)
    {
        rod_always = 2;
    }
    {
        rod_always = 2;
    }
    if (n == 1)
    {
        printf("move disk %d to rod %d\n", n, rod);
    }
    if (n == 2)
    {
        if (turn == 0)
        {
            rod = 3;
        }
        if (turn == 1)
        {
            rod = 1;
        }
        if (turn == 2)
        {
            rod = 2;
        }
        hanoi1(1);
        rod--;
        if (rod == 0)
        {
            rod = 3;
        }
        printf("move disk %d to rod %d\n", n, rod);
        hanoi1(1);
    }
    if (n > 2)
    {
        hanoi1(n - 1);
        turn++;
        if (turn == 3)
        {
            turn = 0;
        }
        printf("move disk %d to rod %d\n", n, rod_always);
        hanoi1(n - 1);
    }*/
}