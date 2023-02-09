#include <stdint.h>
#include <stdio.h>

#include "basic.h"
#include "C75.h"
int32_t ID_to_point(int32_t ID);
void sort(int path[], size_t size);
int32_t buff(int n1, int n2, int n3, int n4, int n5);
int main()
{

    int32_t path[70][7] = {
        {1, 2, 3, 4, 9, 14, 19},
        {1, 2, 3, 8, 9, 14, 19},
        {1, 2, 3, 8, 13, 14, 19},
        {1, 2, 3, 8, 13, 18, 19},
        {1, 2, 3, 8, 13, 18, 23},
        {1, 2, 7, 8, 9, 14, 19},
        {1, 2, 7, 8, 13, 14, 19},
        {1, 2, 7, 8, 13, 18, 19},
        {1, 2, 7, 8, 13, 18, 23},
        {1, 2, 7, 12, 13, 14, 19},
        {1, 2, 7, 12, 13, 18, 19},
        {1, 2, 7, 12, 17, 18, 19},
        {1, 2, 7, 12, 13, 18, 23},
        {1, 2, 7, 12, 17, 18, 19},
        {1, 2, 7, 12, 17, 18, 23},
        {1, 2, 7, 12, 17, 22, 23},
        {1, 6, 7, 8, 9, 14, 19},
        {1, 6, 7, 8, 13, 14, 19},
        {1, 6, 7, 8, 13, 18, 19},
        {1, 6, 7, 8, 13, 18, 23},
        {1, 6, 7, 12, 13, 14, 19},
        {1, 6, 7, 12, 13, 18, 19},
        {1, 6, 7, 12, 13, 18, 23},
        {1, 6, 7, 12, 17, 18, 19},
        {1, 6, 7, 12, 17, 18, 23},
        {1, 6, 7, 12, 17, 22, 23},
        {1, 6, 11, 12, 13, 14, 19},
        {1, 6, 11, 12, 13, 18, 19},
        {1, 6, 11, 12, 13, 18, 23},
        {1, 6, 11, 12, 17, 18, 19},
        {1, 6, 11, 12, 17, 18, 23},
        {1, 6, 11, 12, 17, 22, 23},
        {1, 6, 11, 16, 17, 18, 19},
        {1, 6, 11, 16, 17, 18, 23},
        {1, 6, 11, 16, 17, 22, 23},
        {1, 6, 11, 16, 21, 22, 23},
        {5, 6, 7, 8, 9, 14, 19},
        {5, 6, 7, 8, 13, 14, 19},
        {5, 6, 7, 8, 13, 18, 19},
        {5, 6, 7, 8, 13, 18, 23},
        {5, 6, 7, 12, 13, 14, 19},
        {5, 6, 7, 12, 13, 18, 19},
        {5, 6, 7, 12, 13, 18, 23},
        {5, 6, 7, 12, 17, 18, 19},
        {5, 6, 7, 12, 17, 18, 23},
        {5, 6, 7, 12, 17, 22, 23},
        {5, 6, 11, 12, 13, 14, 19},
        {5, 6, 11, 12, 13, 18, 19},
        {5, 6, 11, 12, 13, 18, 23},
        {5, 6, 11, 12, 17, 18, 19},
        {5, 6, 11, 12, 17, 18, 23},
        {5, 6, 11, 12, 17, 22, 23},
        {5, 6, 11, 16, 17, 18, 19},
        {5, 6, 11, 16, 17, 18, 23},
        {5, 6, 11, 16, 17, 22, 23},
        {5, 6, 11, 16, 21, 22, 23},
        {5, 10, 11, 12, 13, 14, 19},
        {5, 10, 11, 12, 13, 18, 19},
        {5, 10, 11, 12, 13, 18, 23},
        {5, 10, 11, 12, 17, 18, 19},
        {5, 10, 11, 12, 17, 18, 23},
        {5, 10, 11, 12, 17, 22, 23},
        {5, 10, 11, 16, 17, 18, 19},
        {5, 10, 11, 16, 17, 18, 23},
        {5, 10, 11, 16, 17, 22, 23},
        {5, 10, 15, 16, 17, 18, 19},
        {5, 10, 15, 16, 17, 18, 23},
        {5, 10, 15, 16, 17, 22, 23},
        {5, 10, 15, 16, 21, 22, 23},
        {5, 10, 15, 20, 21, 22, 23}};

    int32_t e[5] = {1, 2, 2, 4, 4};

    int32_t C[21][5] = {{2, 3, 4, 5, 6},
                        {1, 3, 4, 5, 6},
                        {0, 2, 4, 5, 6},
                        {1, 2, 3, 5, 6},
                        {1, 2, 3, 4, 6},
                        {1, 2, 3, 4, 5},
                        {0, 3, 4, 5, 6},
                        {0, 2, 4, 5, 6},
                        {0, 2, 3, 5, 6},
                        {0, 2, 3, 4, 6},
                        {0, 2, 3, 4, 5},
                        {0, 1, 4, 5, 6},
                        {0, 1, 3, 5, 6},
                        {0, 1, 3, 4, 6},
                        {0, 1, 3, 4, 5},
                        {0, 1, 2, 5, 6},
                        {0, 1, 2, 4, 6},
                        {0, 1, 2, 4, 5},
                        {0, 1, 2, 3, 6},
                        {0, 1, 2, 3, 5},
                        {0, 1, 2, 3, 4}};
    int32_t tmp[5][5] = {0};

    int32_t size = 5;
    int32_t p[5][5] = {0};

    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            p[i][j] += ID_to_point(AttributeID1[i][j]);
            p[i][j] += ID_to_point(AttributeID2[i][j]);
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    int32_t A[1470] = {0};
    int32_t B[1470][5] = {0};
    int32_t k = 0;
    for (int32_t i = 0; i < 70; i++)
    {
        // A[i] += p[(path[i][3]) / 5][(path[i][3]) % 5];
        A[k] += p[(path[i][3]) / 5][(path[i][3]) % 5];
        A[k] += p[(path[i][2]) / 5][(path[i][2]) % 5];
        A[k] += p[(path[i][4]) / 5][(path[i][4]) % 5];
        A[k] += p[(path[i][5]) / 5][(path[i][5]) % 5];
        A[k] += p[(path[i][6]) / 5][(path[i][6]) % 5];
        A[k] += buff(TypeOfAttribute[path[i][3] / 5][path[i][3] % 5],
                     TypeOfAttribute[path[i][2] / 5][path[i][2] % 5],
                     TypeOfAttribute[path[i][4] / 5][path[i][4] % 5],
                     TypeOfAttribute[path[i][5] / 5][path[i][5] % 5],
                     TypeOfAttribute[path[i][6] / 5][path[i][6] % 5]);
        A[k + 1] += p[(path[i][1]) / 5][(path[i][1]) % 5];
        A[k + 1] += p[(path[i][3]) / 5][(path[i][3]) % 5];
        A[k + 1] += p[(path[i][4]) / 5][(path[i][4]) % 5];
        A[k + 1] += p[(path[i][5]) / 5][(path[i][5]) % 5];
        A[k + 1] += p[(path[i][6]) / 5][(path[i][6]) % 5];
        A[k + 1] += buff(TypeOfAttribute[path[i][1] / 5][path[i][1] % 5],
                         TypeOfAttribute[path[i][3] / 5][path[i][3] % 5],
                         TypeOfAttribute[path[i][4] / 5][path[i][4] % 5],
                         TypeOfAttribute[path[i][5] / 5][path[i][5] % 5],
                         TypeOfAttribute[path[i][6] / 5][path[i][6] % 5]);
        A[k + 2] += p[(path[i][0]) / 5][(path[i][0]) % 5];
        A[k + 2] += p[(path[i][2]) / 5][(path[i][2]) % 5];
        A[k + 2] += p[(path[i][4]) / 5][(path[i][4]) % 5];
        A[k + 2] += p[(path[i][5]) / 5][(path[i][5]) % 5];
        A[k + 2] += p[(path[i][6]) / 5][(path[i][6]) % 5];
        A[k + 2] += buff(TypeOfAttribute[path[i][0] / 5][path[i][0] % 5],
                         TypeOfAttribute[path[i][2] / 5][path[i][2] % 5],
                         TypeOfAttribute[path[i][4] / 5][path[i][4] % 5],
                         TypeOfAttribute[path[i][5] / 5][path[i][5] % 5],
                         TypeOfAttribute[path[i][6] / 5][path[i][6] % 5]);

        A[k + 3] += p[(path[i][1]) / 5][(path[i][1]) % 5];
        A[k + 3] += p[(path[i][2]) / 5][(path[i][2]) % 5];
        A[k + 3] += p[(path[i][3]) / 5][(path[i][3]) % 5];
        A[k + 3] += p[(path[i][5]) / 5][(path[i][5]) % 5];
        A[k + 3] += p[(path[i][6]) / 5][(path[i][6]) % 5];
        A[k + 3] += buff(TypeOfAttribute[path[i][1] / 5][path[i][1] % 5],
                         TypeOfAttribute[path[i][2] / 5][path[i][2] % 5],
                         TypeOfAttribute[path[i][3] / 5][path[i][3] % 5],
                         TypeOfAttribute[path[i][5] / 5][path[i][5] % 5],
                         TypeOfAttribute[path[i][6] / 5][path[i][6] % 5]);

        A[k + 4] += p[(path[i][1]) / 5][(path[i][1]) % 5];
        A[k + 4] += p[(path[i][2]) / 5][(path[i][2]) % 5];
        A[k + 4] += p[(path[i][3]) / 5][(path[i][3]) % 5];
        A[k + 4] += p[(path[i][4]) / 5][(path[i][4]) % 5];
        A[k + 4] += p[(path[i][6]) / 5][(path[i][6]) % 5];
        A[k + 4] += buff(TypeOfAttribute[path[i][1] / 5][path[i][1] % 5],
                         TypeOfAttribute[path[i][2] / 5][path[i][2] % 5],
                         TypeOfAttribute[path[i][3] / 5][path[i][3] % 5],
                         TypeOfAttribute[path[i][4] / 5][path[i][4] % 5],
                         TypeOfAttribute[path[i][6] / 5][path[i][6] % 5]);

        A[k + 5] += p[(path[i][1]) / 5][(path[i][1]) % 5];
        A[k + 5] += p[(path[i][2]) / 5][(path[i][2]) % 5];
        A[k + 5] += p[(path[i][3]) / 5][(path[i][3]) % 5];
        A[k + 5] += p[(path[i][4]) / 5][(path[i][4]) % 5];
        A[k + 5] += p[(path[i][5]) / 5][(path[i][5]) % 5];
        A[k + 5] += buff(TypeOfAttribute[path[i][1] / 5][path[i][1] % 5],
                         TypeOfAttribute[path[i][2] / 5][path[i][2] % 5],
                         TypeOfAttribute[path[i][3] / 5][path[i][3] % 5],
                         TypeOfAttribute[path[i][4] / 5][path[i][4] % 5],
                         TypeOfAttribute[path[i][5] / 5][path[i][5] % 5]);

        A[k + 6] += p[(path[i][0]) / 5][(path[i][0]) % 5];
        A[k + 6] += p[(path[i][3]) / 5][(path[i][3]) % 5];
        A[k + 6] += p[(path[i][4]) / 5][(path[i][4]) % 5];
        A[k + 6] += p[(path[i][5]) / 5][(path[i][5]) % 5];
        A[k + 6] += p[(path[i][6]) / 5][(path[i][6]) % 5];
        A[k + 6] += buff(TypeOfAttribute[path[i][0] / 5][path[i][0] % 5],
                         TypeOfAttribute[path[i][3] / 5][path[i][3] % 5],
                         TypeOfAttribute[path[i][4] / 5][path[i][4] % 5],
                         TypeOfAttribute[path[i][5] / 5][path[i][5] % 5],
                         TypeOfAttribute[path[i][6] / 5][path[i][6] % 5]);

        A[k + 7] += p[(path[i][0]) / 5][(path[i][0]) % 5];
        A[k + 7] += p[(path[i][2]) / 5][(path[i][2]) % 5];
        A[k + 7] += p[(path[i][4]) / 5][(path[i][4]) % 5];
        A[k + 7] += p[(path[i][5]) / 5][(path[i][5]) % 5];
        A[k + 7] += p[(path[i][6]) / 5][(path[i][6]) % 5];
        A[k + 7] += buff(TypeOfAttribute[path[i][0] / 5][path[i][0] % 5],
                         TypeOfAttribute[path[i][2] / 5][path[i][2] % 5],
                         TypeOfAttribute[path[i][4] / 5][path[i][4] % 5],
                         TypeOfAttribute[path[i][5] / 5][path[i][5] % 5],
                         TypeOfAttribute[path[i][6] / 5][path[i][6] % 5]);

        A[k + 8] += p[(path[i][2]) / 5][(path[i][2]) % 5];
        A[k + 8] += p[(path[i][3]) / 5][(path[i][3]) % 5];
        A[k + 8] += p[(path[i][5]) / 5][(path[i][5]) % 5];
        A[k + 8] += p[(path[i][6]) / 5][(path[i][6]) % 5];
        A[k + 8] += buff(TypeOfAttribute[path[i][0] / 5][path[i][0] % 5],
                         TypeOfAttribute[path[i][2] / 5][path[i][2] % 5],
                         TypeOfAttribute[path[i][3] / 5][path[i][3] % 5],
                         TypeOfAttribute[path[i][5] / 5][path[i][5] % 5],
                         TypeOfAttribute[path[i][6] / 5][path[i][6] % 5]);

        A[k + 9] += p[(path[i][0]) / 5][(path[i][0]) % 5];
        A[k + 9] += p[(path[i][2]) / 5][(path[i][2]) % 5];
        A[k + 9] += p[(path[i][3]) / 5][(path[i][3]) % 5];
        A[k + 9] += p[(path[i][4]) / 5][(path[i][4]) % 5];
        A[k + 9] += p[(path[i][6]) / 5][(path[i][6]) % 5];
        A[k + 9] += buff(TypeOfAttribute[path[i][0] / 5][path[i][0] % 5],
                         TypeOfAttribute[path[i][2] / 5][path[i][2] % 5],
                         TypeOfAttribute[path[i][3] / 5][path[i][3] % 5],
                         TypeOfAttribute[path[i][4] / 5][path[i][4] % 5],
                         TypeOfAttribute[path[i][6] / 5][path[i][6] % 5]);

        A[k + 10] += p[(path[i][0]) / 5][(path[i][0]) % 5];
        A[k + 10] += p[(path[i][2]) / 5][(path[i][2]) % 5];
        A[k + 10] += p[(path[i][3]) / 5][(path[i][3]) % 5];
        A[k + 10] += p[(path[i][4]) / 5][(path[i][4]) % 5];
        A[k + 10] += p[(path[i][5]) / 5][(path[i][5]) % 5];
        A[k + 10] += buff(TypeOfAttribute[path[i][0] / 5][path[i][0] % 5],
                          TypeOfAttribute[path[i][2] / 5][path[i][2] % 5],
                          TypeOfAttribute[path[i][3] / 5][path[i][3] % 5],
                          TypeOfAttribute[path[i][4] / 5][path[i][4] % 5],
                          TypeOfAttribute[path[i][5] / 5][path[i][5] % 5]);

        A[k + 11] += p[(path[i][0]) / 5][(path[i][0]) % 5];
        A[k + 11] += p[(path[i][1]) / 5][(path[i][1]) % 5];
        A[k + 11] += p[(path[i][4]) / 5][(path[i][4]) % 5];
        A[k + 11] += p[(path[i][5]) / 5][(path[i][5]) % 5];
        A[k + 11] += p[(path[i][6]) / 5][(path[i][6]) % 5];
        A[k + 11] += buff(TypeOfAttribute[path[i][0] / 5][path[i][0] % 5],
                          TypeOfAttribute[path[i][1] / 5][path[i][1] % 5],
                          TypeOfAttribute[path[i][4] / 5][path[i][4] % 5],
                          TypeOfAttribute[path[i][5] / 5][path[i][5] % 5],
                          TypeOfAttribute[path[i][6] / 5][path[i][6] % 5]);

        A[k + 12] += p[(path[i][0]) / 5][(path[i][0]) % 5];
        A[k + 12] += p[(path[i][1]) / 5][(path[i][1]) % 5];
        A[k + 12] += p[(path[i][3]) / 5][(path[i][3]) % 5];
        A[k + 12] += p[(path[i][5]) / 5][(path[i][5]) % 5];
        A[k + 12] += p[(path[i][6]) / 5][(path[i][6]) % 5];
        A[k + 12] += buff(TypeOfAttribute[path[i][0] / 5][path[i][0] % 5],
                          TypeOfAttribute[path[i][1] / 5][path[i][1] % 5],
                          TypeOfAttribute[path[i][3] / 5][path[i][3] % 5],
                          TypeOfAttribute[path[i][5] / 5][path[i][5] % 5],
                          TypeOfAttribute[path[i][6] / 5][path[i][6] % 5]);

        A[k + 13] += p[(path[i][0]) / 5][(path[i][0]) % 5];
        A[k + 13] += p[(path[i][1]) / 5][(path[i][1]) % 5];
        A[k + 13] += p[(path[i][3]) / 5][(path[i][3]) % 5];
        A[k + 13] += p[(path[i][4]) / 5][(path[i][4]) % 5];
        A[k + 13] += p[(path[i][6]) / 5][(path[i][6]) % 5];
        A[k + 13] += buff(TypeOfAttribute[path[i][0] / 5][path[i][0] % 5],
                          TypeOfAttribute[path[i][1] / 5][path[i][1] % 5],
                          TypeOfAttribute[path[i][3] / 5][path[i][3] % 5],
                          TypeOfAttribute[path[i][4] / 5][path[i][4] % 5],
                          TypeOfAttribute[path[i][6] / 5][path[i][6] % 5]);

        A[k + 14] += p[(path[i][0]) / 5][(path[i][0]) % 5];
        A[k + 14] += p[(path[i][1]) / 5][(path[i][1]) % 5];
        A[k + 14] += p[(path[i][3]) / 5][(path[i][3]) % 5];
        A[k + 14] += p[(path[i][4]) / 5][(path[i][4]) % 5];
        A[k + 14] += p[(path[i][5]) / 5][(path[i][5]) % 5];
        A[k + 14] += buff(TypeOfAttribute[path[i][0] / 5][path[i][0] % 5],
                          TypeOfAttribute[path[i][1] / 5][path[i][1] % 5],
                          TypeOfAttribute[path[i][3] / 5][path[i][3] % 5],
                          TypeOfAttribute[path[i][4] / 5][path[i][4] % 5],
                          TypeOfAttribute[path[i][5] / 5][path[i][5] % 5]);

        A[k + 15] += p[(path[i][0]) / 5][(path[i][0]) % 5];
        A[k + 15] += p[(path[i][1]) / 5][(path[i][1]) % 5];
        A[k + 15] += p[(path[i][2]) / 5][(path[i][2]) % 5];
        A[k + 15] += p[(path[i][5]) / 5][(path[i][5]) % 5];
        A[k + 15] += p[(path[i][6]) / 5][(path[i][6]) % 5];
        A[k + 15] += buff(TypeOfAttribute[path[i][0] / 5][path[i][0] % 5],
                          TypeOfAttribute[path[i][1] / 5][path[i][1] % 5],
                          TypeOfAttribute[path[i][2] / 5][path[i][2] % 5],
                          TypeOfAttribute[path[i][5] / 5][path[i][5] % 5],
                          TypeOfAttribute[path[i][6] / 5][path[i][6] % 5]);

        A[k + 16] += p[(path[i][0]) / 5][(path[i][0]) % 5];
        A[k + 16] += p[(path[i][1]) / 5][(path[i][1]) % 5];
        A[k + 16] += p[(path[i][2]) / 5][(path[i][2]) % 5];
        A[k + 16] += p[(path[i][4]) / 5][(path[i][4]) % 5];
        A[k + 16] += p[(path[i][6]) / 5][(path[i][6]) % 5];
        A[k + 16] += buff(TypeOfAttribute[path[i][0] / 5][path[i][0] % 5],
                          TypeOfAttribute[path[i][1] / 5][path[i][1] % 5],
                          TypeOfAttribute[path[i][2] / 5][path[i][2] % 5],
                          TypeOfAttribute[path[i][4] / 5][path[i][4] % 5],
                          TypeOfAttribute[path[i][6] / 5][path[i][6] % 5]);

        A[k + 17] += p[(path[i][0]) / 5][(path[i][0]) % 5];
        A[k + 17] += p[(path[i][1]) / 5][(path[i][1]) % 5];
        A[k + 17] += p[(path[i][2]) / 5][(path[i][2]) % 5];
        A[k + 17] += p[(path[i][4]) / 5][(path[i][4]) % 5];
        A[k + 17] += p[(path[i][5]) / 5][(path[i][5]) % 5];
        A[k + 17] += buff(TypeOfAttribute[path[i][0] / 5][path[i][0] % 5],
                          TypeOfAttribute[path[i][1] / 5][path[i][1] % 5],
                          TypeOfAttribute[path[i][2] / 5][path[i][2] % 5],
                          TypeOfAttribute[path[i][4] / 5][path[i][4] % 5],
                          TypeOfAttribute[path[i][5] / 5][path[i][5] % 5]);

        A[k + 18] += p[(path[i][0]) / 5][(path[i][0]) % 5];
        A[k + 18] += p[(path[i][1]) / 5][(path[i][1]) % 5];
        A[k + 18] += p[(path[i][2]) / 5][(path[i][2]) % 5];
        A[k + 18] += p[(path[i][3]) / 5][(path[i][3]) % 5];
        A[k + 18] += p[(path[i][6]) / 5][(path[i][6]) % 5];
        A[k + 18] += buff(TypeOfAttribute[path[i][0] / 5][path[i][0] % 5],
                          TypeOfAttribute[path[i][1] / 5][path[i][1] % 5],
                          TypeOfAttribute[path[i][2] / 5][path[i][2] % 5],
                          TypeOfAttribute[path[i][3] / 5][path[i][3] % 5],
                          TypeOfAttribute[path[i][6] / 5][path[i][6] % 5]);

        A[k + 19] += p[(path[i][0]) / 5][(path[i][0]) % 5];
        A[k + 19] += p[(path[i][1]) / 5][(path[i][1]) % 5];
        A[k + 19] += p[(path[i][2]) / 5][(path[i][2]) % 5];
        A[k + 19] += p[(path[i][3]) / 5][(path[i][3]) % 5];
        A[k + 19] += p[(path[i][5]) / 5][(path[i][5]) % 5];
        A[k + 19] += buff(TypeOfAttribute[path[i][0] / 5][path[i][0] % 5],
                          TypeOfAttribute[path[i][1] / 5][path[i][1] % 5],
                          TypeOfAttribute[path[i][2] / 5][path[i][2] % 5],
                          TypeOfAttribute[path[i][3] / 5][path[i][3] % 5],
                          TypeOfAttribute[path[i][5] / 5][path[i][5] % 5]);

        A[k + 20] += p[(path[i][0]) / 5][(path[i][0]) % 5];
        A[k + 20] += p[(path[i][1]) / 5][(path[i][1]) % 5];
        A[k + 20] += p[(path[i][2]) / 5][(path[i][2]) % 5];
        A[k + 20] += p[(path[i][3]) / 5][(path[i][3]) % 5];
        A[k + 20] += p[(path[i][4]) / 5][(path[i][4]) % 5];
        A[k + 20] += buff(TypeOfAttribute[path[i][0] / 5][path[i][0] % 5],
                          TypeOfAttribute[path[i][1] / 5][path[i][1] % 5],
                          TypeOfAttribute[path[i][2] / 5][path[i][2] % 5],
                          TypeOfAttribute[path[i][3] / 5][path[i][3] % 5],
                          TypeOfAttribute[path[i][4] / 5][path[i][4] % 5]);
        for (int32_t j = 0; j < 5; j++)
        {
            B[k][j] = TypeOfAttribute[path[i][C[0][j]] / 5][path[i][C[0][j]] % 5];
        }
        for (int32_t j = 0; j < 5; j++)
        {
            B[k + 1][j] = TypeOfAttribute[path[i][C[1][j]] / 5][path[i][C[1][j]] % 5];
        }
        for (int32_t j = 0; j < 5; j++)
        {
            B[k + 2][j] = TypeOfAttribute[path[i][C[2][j]] / 5][path[i][C[2][j]] % 5];
        }
        for (int32_t j = 0; j < 5; j++)
        {
            B[k + 3][j] = TypeOfAttribute[path[i][C[3][j]] / 5][path[i][C[3][j]] % 5];
        }
        for (int32_t j = 0; j < 5; j++)
        {
            B[k + 4][j] = TypeOfAttribute[path[i][C[4][j]] / 5][path[i][C[4][j]] % 5];
        }
        for (int32_t j = 0; j < 5; j++)
        {
            B[k + 5][j] = TypeOfAttribute[path[i][C[5][j]] / 5][path[i][C[5][j]] % 5];
        }
        for (int32_t j = 0; j < 5; j++)
        {
            B[k + 6][j] = TypeOfAttribute[path[i][C[6][j]] / 5][path[i][C[6][j]] % 5];
        }
        for (int32_t j = 0; j < 5; j++)
        {
            B[k + 7][j] = TypeOfAttribute[path[i][C[7][j]] / 5][path[i][C[7][j]] % 5];
        }
        for (int32_t j = 0; j < 5; j++)
        {
            B[k + 8][j] = TypeOfAttribute[path[i][C[8][j]] / 5][path[i][C[8][j]] % 5];
        }
        for (int32_t j = 0; j < 5; j++)
        {
            B[k + 9][j] = TypeOfAttribute[path[i][C[9][j]] / 5][path[i][C[9][j]] % 5];
        }
        for (int32_t j = 0; j < 5; j++)
        {
            B[k + 10][j] = TypeOfAttribute[path[i][C[10][j]] / 5][path[i][C[10][j]] % 5];
        }
        for (int32_t j = 0; j < 5; j++)
        {
            B[k + 11][j] = TypeOfAttribute[path[i][C[11][j]] / 5][path[i][C[11][j]] % 5];
        }
        for (int32_t j = 0; j < 5; j++)
        {
            B[k + 12][j] = TypeOfAttribute[path[i][C[12][j]] / 5][path[i][C[12][j]] % 5];
        }
        for (int32_t j = 0; j < 5; j++)
        {
            B[k + 13][j] = TypeOfAttribute[path[i][C[13][j]] / 5][path[i][C[13][j]] % 5];
        }
        for (int32_t j = 0; j < 5; j++)
        {
            B[k + 14][j] = TypeOfAttribute[path[i][C[14][j]] / 5][path[i][C[14][j]] % 5];
        }
        for (int32_t j = 0; j < 5; j++)
        {
            B[k + 15][j] = TypeOfAttribute[path[i][C[15][j]] / 5][path[i][C[15][j]] % 5];
        }
        for (int32_t j = 0; j < 5; j++)
        {
            B[k + 16][j] = TypeOfAttribute[path[i][C[16][j]] / 5][path[i][C[16][j]] % 5];
        }
        for (int32_t j = 0; j < 5; j++)
        {
            B[k + 17][j] = TypeOfAttribute[path[i][C[17][j]] / 5][path[i][C[17][j]] % 5];
        }
        for (int32_t j = 0; j < 5; j++)
        {
            B[k + 18][j] = TypeOfAttribute[path[i][C[18][j]] / 5][path[i][C[18][j]] % 5];
        }
        for (int32_t j = 0; j < 5; j++)
        {
            B[k + 19][j] = TypeOfAttribute[path[i][C[19][j]] / 5][path[i][C[19][j]] % 5];
        }
        for (int32_t j = 0; j < 5; j++)
        {
            B[k + 20][j] = TypeOfAttribute[path[i][C[20][j]] / 5][path[i][C[20][j]] % 5];
        }

        k = k + 21;
    }

    // sort(A, 1470);

    int32_t tem = 0;
    for (size_t i = 0; i < 1470; i++)
    {
        for (size_t j = 0; j < 1470 - 1; j++)
        {

            if (A[j] > A[j + 1])
            {
                tem = A[j];
                A[j] = A[j + 1];
                A[j + 1] = tem;
                for (int32_t k = 0; k < 5; k++)
                {
                    tem = B[j][k];
                    B[j][k] = B[j + 1][k];
                    B[j + 1][k] = tem;
                }
            }
        }
    }

    for (size_t i = 0; i < 1470; i++)
    {
        printf("%d ", A[i]);
        if (i % 21 == 20)
        {
            printf("\n");
        }
    }
    for (size_t i = 0; i < 1470; i++)
    {
        for (int32_t j = 0; j < 5; j++)
        {
            printf("%d ", B[i][j]);
        }

        printf("\n");
    }
    printf("1st Top Total Point: %d.  Type of five Artifact: %d %d %d %d %d. \n", A[1469],
           B[1469][0], B[1469][1], B[1469][2], B[1469][3], B[1469][4]);
    printf("2nd Top Total Point: %d.  Type of five Artifact: %d %d %d %d %d. \n", A[1468],
           B[1468][0], B[1468][1], B[1468][2], B[1468][3], B[1468][4]);
    printf("3rd Top Total Point: %d.  Type of five Artifact: %d %d %d %d %d. \n", A[1467],
           B[1467][0], B[1467][1], B[1467][2], B[1467][3], B[1467][4]);
    /*printf("3rd Top Total Point: %d.  Type of five Artifact: %d %d %d %d %d. \n", A[1466],
           B[1466][0], B[1466][1], B[1466][2], B[1466][3], B[1466][4]);
    printf("3rd Top Total Point: %d.  Type of five Artifact: %d %d %d %d %d. \n", A[1465],
           B[1465][0], B[1465][1], B[1465][2], B[1465][3], B[1465][4]);
    printf("3rd Top Total Point: %d.  Type of five Artifact: %d %d %d %d %d. \n", A[1464],
           B[1464][0], B[1464][1], B[1464][2], B[1464][3], B[1464][4]);
    printf("3rd Top Total Point: %d.  Type of five Artifact: %d %d %d %d %d. \n", A[1463],
           B[1463][0], B[1463][1], B[1463][2], B[1463][3], B[1463][4]);
    printf("3rd Top Total Point: %d.  Type of five Artifact: %d %d %d %d %d. \n", A[1462],
           B[1462][0], B[1462][1], B[1462][2], B[1462][3], B[1462][4]);
    printf("3rd Top Total Point: %d.  Type of five Artifact: %d %d %d %d %d. \n", A[1461],
           B[1461][0], B[1461][1], B[1461][2], B[1461][3], B[1461][4]);
    printf("3rd Top Total Point: %d.  Type of five Artifact: %d %d %d %d %d. \n", A[1460],
           B[1460][0], B[1460][1], B[1460][2], B[1460][3], B[1460][4]);
    printf("3rd Top Total Point: %d.  Type of five Artifact: %d %d %d %d %d. \n", A[1459],
           B[1459][0], B[1459][1], B[1459][2], B[1459][3], B[1459][4]);*/
    printf("Target Boss required point: %d\n", bossPoint);

    if (A[1467] > bossPoint)
    {
        printf("\e[32mReady Perfectly!\e[m\n");
    }
    else
    {
        printf("\e[31mGonna be OK\e[m\n");
    }
    return 0;
}
/*void sort(int path[], size_t size)
{
    int32_t tem = 0;
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size - 1; j++)
        {

            if (path[j] > path[j + 1])
            {
                tem = path[j];
                path[j] = path[j + 1];
                path[j + 1] = tem;
            }
        }
    }
}*/
int32_t buff(int n1, int n2, int n3, int n4, int n5)
{
    int32_t a[5] = {n1, n2, n3, n4, n5};
    int32_t a1 = 0;
    int32_t a2 = 0;
    int32_t a3 = 0;
    int32_t a4 = 0;
    int32_t a5 = 0;
    int32_t a6 = 0;
    int32_t a7 = 0;
    for (int32_t i = 0; i < 5; i++)
    {
        if (a[i] == 1)
            a1++;
        if (a[i] == 2)
            a2++;
        if (a[i] == 3)
            a3++;
        if (a[i] == 4)
            a4++;
        if (a[i] == 5)
            a5++;
        if (a[i] == 6)
            a6++;
        if (a[i] == 7)
            a7++;
    }
    int32_t sum = 0;
    if (a1 >= 4)
    {
        sum += 160;
    }
    else if (a1 >= 2)
    {
        sum += 10;
    }
    if (a2 >= 4)
    {
        sum += 150;
    }
    else if (a2 >= 2)
    {
        sum += 20;
    }
    if (a3 >= 4)
    {
        sum += 75;
    }
    else if (a3 >= 2)
    {
        sum += 35;
    }
    if (a4 >= 4)
    {
        sum += 135;
    }
    else if (a4 >= 2)
    {
        sum += 50;
    }
    if (a5 >= 4)
    {
        sum += 125;
    }
    else if (a5 >= 2)
    {
        sum += 60;
    }
    if (a6 >= 4)
    {
        sum += 95;
    }
    else if (a6 >= 2)
    {
        sum += 75;
    }
    if (a7 >= 4)
    {
        sum += 110;
    }
    else if (a7 >= 2)
    {
        sum += 100;
    }
    return sum;
}

int32_t ID_to_point(int32_t ID)
{
    if (ID == 1)
    {
        return 125;
    }
    else if (ID == 2)
    {
        return 100;
    }
    else if (ID == 3)
    {
        return 75;
    }
    else if (ID == 4)
    {
        return 50;
    }
    else if (ID == 5)
    {
        return 50;
    }
    else if (ID == 6)
    {
        return 25;
    }
    else if (ID == 7)
    {
        return 10;
    }
    else
        return 0;
}