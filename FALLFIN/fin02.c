#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "canvas.h"

void color(int32_t n);

void search(int32_t x, int32_t y, int32_t c);

int main()
{
    // input mycanvas
    /*int32_t my_canvas[row_size][col_size];
    for (int32_t i = 0; i < row_size; i++)
    {
        for (int32_t j = 0; j < col_size; j++)
        {
            my_canvas[i][j] = canvas[i][j];
        }
    }*/
    for (int32_t i = 0; i < row_size; i++)
    {
        for (int32_t j = 0; j < col_size; j++)
        {
            if (canvas[i][j] == 1)
            {
                canvas[i][j] = -1;
            }
        }
    }
    // print canvas
    for (int32_t i = 0; i < col_size; i++)
    {
        if (i == 0)
        {
            printf("  ");
        }
        printf(" %d", i % 10);
    }
    printf("\n");
    for (int32_t i = 0; i < row_size; i++)
    {
        printf("%d ", i % 10);
        for (int32_t j = 0; j < col_size; j++)
        {
            color(canvas[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int32_t x = 0;
    int32_t y = 0;
    int32_t c = 0;
    int32_t next = 0;
    while (1)
    {
        printf("Please enter the point (x,y): ");
        // scanf("%d,%d", &x, &y);

        scanf("(%d,%d)", &x, &y);

        printf("Please enter the color [0,4]: ");
        scanf("%d", &c);
        getchar();
        printf("x= %d\ny= %d\n", x, y);
        if (canvas[x][y] == -1)
        {
            printf("warning!\n");
        }
        else
        {
            search(x, y, c);

            for (int32_t i = 0; i < col_size; i++)
            {
                if (i == 0)
                {
                    printf("  ");
                }
                printf(" %d", i % 10);
            }
            printf("\n");
            for (int32_t i = 0; i < row_size; i++)
            {
                printf("%d ", i % 10);
                for (int32_t j = 0; j < col_size; j++)
                {
                    color(canvas[i][j]);
                }
                printf("\n");
            }
            printf("\n");
        }
    }

    return 0;
}

void search(int32_t x, int32_t y, int32_t c)
{
    if (canvas[x][y] != -1)
    {
        if (canvas[x][y] == c)
        {
            return;
        }
        else
        {
            canvas[x][y] = c;
            if (x - 1 >= 0 && y >= 0 && x - 1 < row_size && y < col_size)
            {
                search(x - 1, y, c);
            }
            if (x + 1 >= 0 && y >= 0 && x + 1 < row_size && y < col_size)
            {
                search(x + 1, y, c);
            }
            if (x >= 0 && y - 1 >= 0 && x < row_size && y - 1 < col_size)
            {
                search(x, y - 1, c);
            }
            if (x >= 0 && y + 1 >= 0 && x < row_size && y + 1 < col_size)
            {
                search(x, y + 1, c);
            }
        }
    }
    else
    {
        return;
    }
}

void color(int32_t n)
{
    if (n == -1)
    {
        printf("\x1b[40m  \x1b[m");
    }
    else if (n == 0)
    {
        printf("\x1b[47m  \x1b[m");
    }
    else if (n == 1)
    {
        printf("\x1b[41m  \x1b[m");
    }
    else if (n == 2)
    {
        printf("\x1b[43m  \x1b[m");
    }
    else if (n == 3)
    {
        printf("\x1b[42m  \x1b[m");
    }
    else if (n == 4)
    {
        printf("\x1b[44m  \x1b[m");
    }
    return;
}
