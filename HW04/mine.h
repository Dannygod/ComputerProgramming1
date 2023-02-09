#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// board: game board. If the cell is a mine , the value is 1; otherwise , 0.
// row[480] and col[480]: Output answers (row[0],col[0]), (row[1],col[1]),...
// Note that the row and col should start from the top left corner and start from 0.
// The output order should be ascending , row first than col.
// Except the wanted points , other values in these two arrays should be - 1.

int32_t find_good_cells(const int32_t board[16][30], int32_t row[480], int32_t col[480]);

void print_arr(int32_t board[][30]);