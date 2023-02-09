#include <stdio.h>
#include <stdint.h>
#include <math.h>
#pragma GCC diagnostic ignored "-Wformat="
int main()
{
    /* Mortgage Calculator */
    int32_t yyyy = 0, mm = 0;
    printf("Loan Date: ");
    scanf("%d.%d", &yyyy, &mm);
    // printf("\n%d.%d", yyyy, mm);

    int32_t loan_price = 0;
    printf("Loan Price: ");
    scanf("%d", &loan_price);

    int32_t loan_term = 0;
    printf("Loan Term (yrs): ");
    scanf("%d", &loan_term);

    double rate = 0;
    printf("Interest Rate (%) : ");
    scanf("%le", &rate);
    double monthly_rate = 0;
    monthly_rate = (double)rate / 12 / 100;

    int32_t tax = 0;
    printf("Property Tax (/m): ");
    scanf("%d", &tax);

    int32_t insurance;
    printf("Insurance (/m): ");
    scanf("%d", &insurance);

    int32_t additional_payment;
    printf("Additional Payment (/m):");
    scanf("%d", &additional_payment);

    if ((loan_term != 10) && (loan_term != 15) && (loan_term != 20) && (loan_term != 30))
    {
        printf("error\n");
    }
    else
    {
        printf("--- Output ---\n");
        // Monthly payment
        double monthly_payment = 0;
        int32_t n = 0;
        n = loan_term * 12;
        monthly_payment = (double)loan_price * (double)monthly_rate * (double)(pow((1 + monthly_rate), n) / ((pow(1 + monthly_rate, n)) - 1));
        printf("%f\n", monthly_payment);

        int32_t monthly_payment_total = monthly_payment + tax + insurance + additional_payment;
        printf("Total monthly payment: %d\n", monthly_payment_total);
        double principal = 0;
        double monthly_interest = 0;
        double remaining = 0;
        remaining = loan_price;
        principal = monthly_payment - remaining * monthly_rate;

        int32_t count = 0;
        while (1)
        {
            mm++;
            if (mm > 12)
            {
                mm = 1;
                yyyy++;
            }
            if (count == n)
            {
                break;
            }
            monthly_interest = remaining * (monthly_rate);
            principal = additional_payment + monthly_payment - remaining * (monthly_rate);
            remaining = remaining - principal;
            printf("%d.%02d) Principal: $%.02f, Interest:$%.02f, Remaining: $%.02f\n", yyyy, mm, principal, monthly_interest, remaining);
            count++;
        }
    }
    return 0;
}