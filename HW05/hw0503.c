#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int32_t (*func_ptr_arr[8])(int32_t);
int32_t state_start(int32_t input);
int32_t s1(int32_t input);
int32_t s2(int32_t input);
int32_t s3(int32_t input);
int32_t s4(int32_t input);
int32_t s5(int32_t input);
int32_t s6(int32_t input);
int32_t state_final(int32_t input);

int main()
{
    func_ptr_arr[0] = state_start;
    func_ptr_arr[1] = s1;
    func_ptr_arr[2] = s2;
    func_ptr_arr[3] = s3;
    func_ptr_arr[4] = s4;
    func_ptr_arr[5] = s5;
    func_ptr_arr[6] = s6;
    func_ptr_arr[7] = state_final;

    printf("Start\n");
    int32_t input = 0;
    int32_t next = 0;
    while (next != 7)
    {
        printf("Please enter an integer: ");
        scanf("%d", &input);
        next = (*func_ptr_arr[next])(input);
        if (next == 0)
        {
            printf("Start\n");
        }
        else if (next == 7)
        {
            printf("Final\n");
        }
        else
        {
            printf("S%d\n", next);
        }
    }
    return 0;
}
int32_t state_start(int32_t input)
{
    if (input == 11)
    {
        return 3;
    }
    else if (input == 10 | input == 35)
    {
        return 1;
    }
    else if (input == 20 | input == 78)
    {
        return 5;
    }
    else
    {
        return 0;
    }
}
int32_t s1(int32_t input)
{
    if (input == 19)
    {
        return 2;
    }
    else if (input == 12 | input == 36)
    {
        return 6;
    }
    else
    {
        return 1;
    }
}
int32_t s2(int32_t input)
{
    if (input == 43)
    {
        return 2;
    }
    else if (input == 99)
    {
        return 7;
    }
    else
    {
        return 0;
    }
}
int32_t s3(int32_t input)
{
    return 4;
}
int32_t s4(int32_t input)
{

    return 6;
}
int32_t s5(int32_t input)
{
    if (input == 1)
        return 4;
    else if (input == 2)
        return 6;
    else
        return 0;
}
int32_t s6(int32_t input)
{
    if (input == 108)
        return 7;
    else
        return 5;
}
int32_t state_final(int32_t input)
{
    return 7;
}
