#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main()
{
    // CSIE: Cuboid Super Infinity Exporter
    printf("Welcome to Cuboid Super Infinity Exporter!\n");
    printf("Please enter Length , Width , and Height of the cuboid\n");
    uint32_t length = 0;
    uint32_t width = 0;
    uint32_t height = 0;
    uint32_t amount = 0;
    printf("Length: ");
    scanf("%d", &length);

    printf("Width: ");
    scanf("%d", &width);

    printf("Height: ");
    scanf("%d", &height);

    printf("How many cuboids do you want to generate?\n");
    printf("Amount:");
    scanf("%d", &amount);
    if (length < 4 | height < 4 | width < 4 | amount < 1 | (width + length * 2 - 1 > 80))
    {
        printf("error\n");
    }
    else
    { /* Draw */

        uint32_t count_height = 0;
        // Part 1 up + right
        uint32_t blue = 0;
        for (int32_t k = 0; k < amount; k++)
        {
            for (count_height = 0; count_height < width; count_height++) // while (count_height != (2 * height - 1))
            {

                for (int32_t j = 0; j < width - 1 - count_height; j++)
                {
                    printf(" ");
                }

                // print # and color
                printf("#");
                for (int32_t i = 0; i < 2 * length - 2; i++)
                {
                    if (count_height == width - 1 | count_height == 0)
                    {
                        printf("#");
                    }
                    else
                    {
                        printf("\e[47m \e[m");
                    }
                }
                if (count_height > 0)
                {
                    printf("#");
                }
                // print blue
                if (count_height <= height - 1 && count_height >= 2)
                {
                    blue++;
                }
                for (int32_t j = 0; j < blue; j++)
                {
                    printf("\e[44m \e[m");
                }

                printf("#");
                // print space
                if (count_height > height - 1)
                {
                    for (int32_t i = 0; i < count_height - height + 1; i++)
                    {
                        printf(" ");
                        // printf("\e[42m \e[m");
                    }
                }
                printf("\n");
                // printf("\033[%dD", (width + length - 2));
                // printf("\033[%dB", (1)); //\033[s
            }

            // part 2
            for (int32_t count = 0; count < height - 2; count++)
            {
                // printf("%d", count_height);
                if (count_height >= height)
                {
                    blue--;
                }
                // printf("%d", blue);
                if (blue < 0)
                {
                    break;
                }
                printf("#");
                for (int32_t i = 0; i < 2 * length - 2; i++)
                {
                    printf("\e[42m \e[m");
                }
                printf("#");
                for (int32_t j = 0; j < blue; j++)
                {
                    printf("\e[44m \e[m");
                    // printf("%d", blue);
                }
                /*if (height <= width)
                {
                    for (int32_t j = 0; j < blue; j++)
                    {
                        printf("\e[44m \e[m");
                    }
                }
                if (height > width)
                {
                    for (int32_t j = 0; j < blue; j++)
                    {
                        printf("\e[44m \e[m");
                    }
                }*/
                printf("#");
                count_height++;
                printf("\n");
            }
            // part 3
            for (int32_t i = 0; i < 2 * length; i++)
            {
                printf("#");
            }
            for (int32_t i = 0; i < width - 1; i++)
            {
                printf(" ");
            }
            printf("\n");
            printf("\n");
            //  printf("\033[%dC", (width));
            // printf("\033[%dA", (height + width - 2)); //\033[s
        }
    }
    return 0;
}