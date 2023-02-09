#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void division(uint8_t **ppQuotient, uint8_t *pQuotientSize,
              uint8_t **ppRemainder, uint8_t *pRemainderSize,
              uint8_t *pX, uint8_t xSize,
              uint8_t *pY, uint8_t ySize)
{
    if (xSize < ySize)
    {
        pQuotientSize[0] = 1;
        pRemainderSize[0] = 3;
        *ppQuotient = calloc(*pQuotientSize, sizeof(uint8_t));
        *ppRemainder = calloc(*pRemainderSize, sizeof(uint8_t));
        *ppQuotient[0] = 0;
        printf("%d ", *pRemainderSize);

        // for (int i = 0; i < *pRemainderSize; i++)
        int i = 0;
        while (*pRemainderSize - i != 0)
        {
            *ppRemainder[i] = pX[i];
            i++;
        }
        return;
    }
    else
    {
        for (int i = 0; i < xSize - ySize; i++)
        {
            strcat(pY, "0"); // Y後面補零
        }
        if (strcmp(pX, pY) >= 0)
        {
            // 大數減法
        }
        uint8_t *r = NULL;
        r = calloc(xSize, sizeof(uint8_t));
        for (int i = xSize - 1; i >= 0; i--)
        {
            if (pX[i] >= pY[i])
            {
                r[i] = pX[i] - pY[i];
            }
            else if (pX[i - 1] > 0 && i - 1 >= 0)
            {
                r[i] = pX[i] + 10 - pY[i];
            }
        }

        return;
    }
}