#pragma once
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void division(uint8_t **ppQuotient, uint8_t *pQuotientSize,
              uint8_t **ppRemainder, uint8_t *pRemainderSize,
              uint8_t *pX, uint8_t xSize,
              uint8_t *pY, uint8_t ySize);