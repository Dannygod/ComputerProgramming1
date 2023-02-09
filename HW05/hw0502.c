#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mymemcmp.h"

int main()
{
    char arr1[10000];
    char arr2[10000];
    int num;
    printf("string1:\n");
    scanf("%s", arr1);
    printf("string2:\n");
    scanf("%s", arr2);
    printf("how long you want to compare?");
    scanf("%d", &num);
    printf("mymemcmp: %d, memcmp: %d\n", mymemcmp(arr1, arr2, num),
           memcmp(arr1, arr2, num));
    return 0;
}