#pragma once
#include <stdio.h>
#include <stdint.h>

// The output is standard deviation for input numbers.
// EX: get_stddev(1); --> return standard deviation for {1}
// get_stddev(2); --> return standard deviation for {1,2}
// get_stddev(3); --> return standard deviation for {1,2,3}
double get_stddev(int32_t number);
