#include <stdio.h>
#include <stdint.h>

double s_to_gp(double score)
{
    if (score >= 90 && score <= 100)
    {
        return 4.3;
    }
    if (score >= 85 && score < 90)
    {
        return 4;
    }
    if (score >= 80 && score < 85)
    {
        return 3.7;
    }
    if (score >= 77 && score < 80)
    {
        return 3.3;
    }
    if (score >= 73 && score < 77)
    {
        return 3.0;
    }
    if (score >= 70 && score <= 73)
    {
        return 2.7;
    }
    if (score >= 67 && score <= 70)
    {
        return 2.3;
    }
    if (score >= 63 && score <= 67)
    {
        return 2.0;
    }
    if (score >= 60 && score <= 63)
    {
        return 1.7;
    }
    if (score >= 50 && score <= 60)
    {
        return 1.0;
    }
    if (score >= 0 && score <= 50)
    {
        return 0;
    }
}

double gp_to_rank(double GPA)
{
    if (GPA >= 4 && GPA <= 4.3)
    {
        return 1;
    }
    if (GPA >= 3.7 && GPA < 4)
    {
        return 2;
    }
    if (GPA >= 3.3 && GPA < 3.7)
    {
        return 3;
    }
    if (GPA >= 3.0 && GPA < 3.3)
    {
        return 4;
    }
    if (GPA >= 2.7 && GPA < 3.0)
    {
        return 5;
    }
    if (GPA >= 2.3 && GPA <= 2.7)
    {
        return 6;
    }
    if (GPA >= 2 && GPA <= 2.3)
    {
        return 7;
    }
    if (GPA >= 1.7 && GPA <= 67)
    {
        return 8;
    }
    if (GPA >= 1 && GPA <= 63)
    {
        return 9;
    }
    if (GPA >= 0 && GPA <= 60)
    {
        return 10;
    }
    if (GPA >= 0 && GPA <= 50)
    {
        return 11;
    }
}
