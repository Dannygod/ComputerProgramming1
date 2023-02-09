#include "mine.h"

int32_t find_good_cells(const int32_t board[16][30], int32_t row[480], int32_t col[480])
{
    int32_t b[18][32] = {0};
    for (int32_t i = 1; i <= 16; i++)
    {
        for (int32_t j = 1; j <= 30; j++)
        {
            b[i][j] = board[i][j];
        }
    }
    for (int32_t i = 0; i < 18; i++)
    {
        for (int32_t j = 0; j < 32; j++)
        {
            b[i - 1][j - 1] = 1;
            b[i - 1][j] = 1;
            b[i - 1][j + 1] = 1;
            b[i][j - 1] = 1;
            b[i][j] = 1;
            b[i][j + 1] = 1;
            b[i + 1][j - 1] = 1;
            b[i + 1][j] = 1;
            b[i + 1][j + 1] = 1;
        }
    }
    for (int32_t i = 0; i < 18; i++)
    {
        for (int32_t j = 0; j < 32; j++)
        {
            if (b[i][j] == 0)
            {
                b[i][j] = -1;
            }
            if (b[i][j] == -1)
            {
                row[i] = i;
                col[j] = j;
                printf("%d %d", i, j);
            }
        }
    }

    for (int32_t i = 0; i < 480; i++)
    {
        row[i] = -1;
        col[i] = -1;
    }
    return 0;
}

void print_arr(int32_t board[][30])
{
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}