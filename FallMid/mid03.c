#include <stdio.h>
#include <stdint.h>
#include "myfunc.h"

int main()
{ /*GPA Calculator*/
    int32_t choice = 0;
    double point = 0;
    double credit = 0;

    double point_a = 0;
    double credit_a = 0;
    double total_credit = 0;
    double total_score = 0;
    double total_GP = 0;

    double sum = 0;
    double GPA = 0;

    double tar_GPA = 0;
    double credit_remain = 0;
    double final_credit = 0;
    double GPA_remain = 0;
    while (choice != 5)
    {
        printf("1) Input the course grade.\n2) Remove the course grade.\n3) GPA report.\n4) Target GPA.\n5) Exit.\n");
        printf("Your Choice (1-5):");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1: // add score
            printf("Points (0-100): ");
            scanf("%lf", &point);
            printf("Credits (0-4): ");
            scanf("%lf", &credit);
            if (point > 100 | point < 0 | credit<0 | credit> 4)
            {
                printf("re-input\n");
            }
            total_credit += credit;
            total_GP = total_GP + s_to_gp(point) * credit;
            printf("%.f %.f\n", total_GP, total_credit);
            break;
        case 2: // delete score
            printf("Points (0-100): ");
            scanf("%lf", &point_a);
            printf("Credits (0-4): ");
            scanf("%lf", &credit_a);
            if (point_a > 100 | point_a < 0 | credit_a<0 | credit_a> 4 | point != point_a | credit != credit_a)
            {
                printf("re-input\n");
            }
            else
            {
                total_credit = total_credit - credit_a;
                total_GP = total_GP - s_to_gp(point) * credit;
            }
            break;
        case 3: // report GPA
            GPA = total_GP / total_credit;
            printf("Total Credits: %f\n", total_credit);
            printf("GPA: %f", GPA);
            break;
        case 4: // target GPA
            printf("Target GPA: ");
            scanf("%lf", &tar_GPA);
            printf("Remaining Credits: ");
            scanf("%lf", &credit_remain);

            if (tar_GPA * total_credit <= total_GP)
            {
                printf("re-input\n");
            }
            else
            {
                GPA = total_GP / total_credit;
                final_credit = credit_remain + total_credit;
                GPA_remain = (tar_GPA * final_credit - total_GP) / credit_remain;

                printf("Your should get at least %f on average for the remaining credits.\n", GPA);
            }
            break;
        default:
            printf("error\n");
            break;
        }
    }
}
