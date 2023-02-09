#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    double speed_hare = 1.2;
    double distance_hare = 0;
    double speed_tor = 0.3;
    double distance_tor = 0;
    double pro = 0;

    double nap = 0;
    srand(time(NULL));
    printf("The Hare Speed (m/turn): ");
    scanf("%lf", &speed_hare);
    printf("The Nap Probability (0-1): ");
    scanf("%lf", &pro);
    pro *= 100;
    int32_t turn = 0;
    while (distance_hare <= 12.3 && distance_tor <= 12.3)
    {

        nap = rand() % 100 + 1;
        if (pro >= nap)
        {
            nap = 1;
        }
        else
        {
            nap = 0;
        }

        // printf("%.f\n", nap);
        distance_tor = distance_tor + speed_tor * 1;
        distance_hare = distance_hare + speed_hare * nap;
        printf("Turn %d) Tortoise: %f, ", turn, distance_tor);

        if (distance_tor >= 12.3 && distance_hare > 12.3)
        {
            // printf("(Draw) ");
        }
        else if (distance_tor >= 12.3)
        {
            printf("(Winner) ");
        }
        printf("Hare: %f ", distance_hare);
        if (distance_tor >= 12.3 && distance_hare > 12.3)
        {
            printf("(Draw) ");
        }
        else if (distance_hare >= 12.3)
        {
            printf("(Winner) ");
        }
        if (nap == 0)
        {
            printf("(NAP)");
        }
        printf("\n");
        turn++;
    }

    return 0;
}