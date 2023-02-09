#include <stdint.h>
#include <stdio.h>
void sort(int path[], size_t size);

int32_t f(int n1, int n2, int n3, int n4, int n5);
int main()
{
    /*int a[3][3] = {0, 2, 3, 4, 3, 6, 5, 0, 0};
    int path[6] = {0};
    /*path[0] += a[0][1];
    path[0] += a[0][2];
    path[0] += a[1][2];
    path[0] += a[2][2];
    int s = 0;
    int k = 0;
    for (int i = 0; i < 3; i++)
    {
        if (k < 2)
            k++;
        else if (s < 2)
            s++;
        path[0] += a[s][k];
        printf("%d %d %d \n", path[0], s, k);
    }

    path[1] = a[0][1] + a[1][1] + a[1][2] + a[2][2];
    path[2] = a[0][1] + a[1][1] + a[2][1] + a[2][2];
    path[3] = a[1][0] + a[1][1] + a[1][2] + a[2][2];
    path[4] = a[1][0] + a[1][1] + a[2][1] + a[2][2];
    path[5] = a[1][0] + a[2][0] + a[2][1] + a[2][2];
    int path2[6] = {0};
    for (int i = 0; i < 6; i++)
    {
        path2[i] = path[i];
    }
    sort(path2, 6);

    if (path2[5] == path[1])
    {
    }
    for (int i = 0; i < 6; i++)
        printf("%d ", path[i]);
    */

    f(1);
    f(2);
    f(1);
    f(1);
    f(2);

    return 0;
}
void sort(int path[], size_t size)
{
    int32_t tem = 0;
    for (int32_t i = 0; i < 5; i++)
    {
        for (int32_t j = 0; j < 5; j++)
        {
            if (path[j] >= path[j + 1])
            {
                tem = path[j];
                path[j] = path[j + 1];
                path[j + 1] = tem;
            }
        }
    }
}

int32_t f(int n1, int n2, int n3, int n4, int n5)
{
    int a[5] = {n1, n2, n3, n4, n5};
    int a1 = 0;
    int a2 = 0;
    int a3 = 0;
    int a4 = 0;
    int a5 = 0;
    int a6 = 0;
    int a7 = 0;
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