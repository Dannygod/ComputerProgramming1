#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
void clockwise(int32_t cube[][9], size_t size, int32_t s);
void counter_clockwise(int32_t cube[][9], size_t size, int32_t s);

void print_cube(int32_t cube[][9], size_t size);
void turn_right(int32_t cube[][9], size_t size, int32_t n);
void turn_down(int32_t cube[][9], size_t size, int32_t n);

int main()
{
    int32_t turn = 0;
    printf("Start: \n");
    int32_t cube[6][9] = {0}; // 6面9格
    for (int32_t i = 0; i < 6; i++)
    {
        for (int32_t j = 0; j < 9; j++)
        {
            cube[i][j] = i + 1;
        }
    }
    size_t size = 9;
    print_cube(cube, size);
    int32_t exit = 1;
    while (exit)
    {
        printf("Input [0-6]: ");
        scanf("%d", &turn);
        if (turn == 0 | turn == 1 | turn == 2 | turn == 3 | turn == 4 | turn == 5 | turn == 6)
        {
            switch (turn)
            {
            case 0:
                exit = 0;
                break;
            case 1:
                turn_right(cube, size, 0);
                print_cube(cube, size);
                break;
            case 2:
                turn_right(cube, size, 3);
                print_cube(cube, size);
                break;
            case 3:
                turn_right(cube, size, 6);
                print_cube(cube, size);
                break;
            case 4:
                turn_down(cube, size, 0);
                print_cube(cube, size);
                break;
            case 5:
                turn_down(cube, size, 1);
                print_cube(cube, size);
                break;
            case 6:
                turn_down(cube, size, 2);
                print_cube(cube, size);
                break;
            default:
                break;
            }
        }
        else
        {
            printf("error\n");
        }
    }
    return 0;
}
void clockwise(int32_t cube[][9], size_t size, int32_t s)
{
    int32_t tem = 0;
    tem = cube[s][0];
    cube[s][0] = cube[s][6];
    cube[s][6] = cube[s][8];
    cube[s][8] = cube[s][2];
    cube[s][2] = tem;
    tem = cube[s][1];
    cube[s][1] = cube[s][3];
    cube[s][3] = cube[s][7];
    cube[s][7] = cube[s][5];
    cube[s][5] = tem;
}

void counter_clockwise(int32_t cube[][9], size_t size, int32_t s)
{
    int32_t tem = 0;
    tem = cube[s][0];
    cube[s][0] = cube[s][2];
    cube[s][2] = cube[s][8];
    cube[s][8] = cube[s][6];
    cube[s][6] = tem;
    tem = cube[s][1];
    cube[s][1] = cube[s][5];
    cube[s][5] = cube[s][7];
    cube[s][7] = cube[s][3];
    cube[s][3] = tem;
}

void turn_right(int32_t cube[][9], size_t size, int32_t n)
{
    int32_t tem = 0;
    for (int32_t j = n; j < n + 3; j++)
    {
        tem = cube[0][j];
        cube[0][j] = cube[1][j];
        cube[1][j] = cube[2][j];
        cube[2][j] = cube[3][j];
        cube[3][j] = tem;
    }
    if (n == 0)
    {
        counter_clockwise(cube, size, 4);
    }
    else if (n == 6)
    {
        clockwise(cube, size, 5);
    }
}

void turn_down(int32_t cube[][9], size_t size, int32_t n)
{
    int32_t tem = 0;
    if (n == 0 | n == 2)
    {
        clockwise(cube, size, 2);
        clockwise(cube, size, 2);
    }
    for (int32_t j = n; j <= n + 6; j = j + 3)
    {
        tem = cube[0][j];
        cube[0][j] = cube[4][j];
        cube[4][j] = cube[2][j];
        cube[2][j] = cube[5][j];
        cube[5][j] = tem;
    }
    if (n == 0 | n == 2)
    {
        clockwise(cube, size, 2);
        clockwise(cube, size, 2);
    }
    if (n == 0)
    {
        clockwise(cube, size, 1);
    }
    else if (n == 2)
    {
        counter_clockwise(cube, size, 3);
    }
}

void print_cube(int32_t cube[][9], size_t size)
{
    for (int32_t i = 0; i < 1; i++) // i < 6 print all
    {
        for (int32_t j = 0; j < 9; j++)
        {
            if (cube[i][j] == 1)
            {
                printf("\e[31m• \e[m"); // red
            }
            if (cube[i][j] == 2)
            {
                printf("\e[32m• \e[m"); // green
            }
            if (cube[i][j] == 3)
            {
                printf("\e[38;5;209m• \e[m"); // orange
            }
            if (cube[i][j] == 4)
            {
                printf("\e[34m• \e[m"); // blue
            }
            if (cube[i][j] == 5)
            {
                printf("\e[37m• \e[m"); // white
            }
            if (cube[i][j] == 6)
            {
                printf("\e[33m• \e[m"); // yellow
            }
            if ((j + 1) % 3 == 0)
            {
                printf("\n");
            }
        }
        // printf("\n");
    }
}
