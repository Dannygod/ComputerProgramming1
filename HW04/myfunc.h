#pragma once
#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

double cal_n_derivatives(int32_t n, double a, int32_t size, int32_t coefficients[], int32_t powers[]);

void printf_arr(int32_t arr[], size_t size);

void sort_arr(int32_t arr[], size_t size);
