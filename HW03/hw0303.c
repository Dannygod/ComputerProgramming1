#include "Req.h"

int main()
{
    int32_t R = 0, n = 0;
    printf("Please enter the resistance (1-100): ");
    scanf("%d", &R);
    printf("Please enter n (1-100): ");
    scanf("%d", &n);
    printf("Ans: %f\n", Req(R, n));
    return 0;
}