#include <stdint.h>
#include <stdio.h>
#include "hanoi2.h"
#include <math.h>

void hanoi2(int32_t n)
{
    int32_t count = n;
    int32_t rod = 3;
    int32_t disk= 0;
    //int32_t a[n]= {0};
    /*for (int32_t i = 0; i < n ; i++)
    {
        a[i]= i;  
    }
    for (int32_t i = 0; i < n ; i++)
    {
        printf("%u ",a[i]);
    }*/
    
    if(n >= 1)
    {
        for (int32_t i = 0; i < pow(2, n) - 1; i++) //n=1 1
                                                  //n=2 3
                                                  //n=3 7
        { 
            
            disk = 1;
            //if()
            {
                disk = 2;
            }

            if((i == pow(2, n - 2) - 1))
            {
                disk = n - 1;
            }
            if(i == pow(2, n - 1) - 1)
            {
                disk = n;   
            }
            printf("move disk %d to rod %d\n", disk, rod);


        }
/*
        for (int32_t i = 0; i < pow(2, n-1) - 1; i++)
        {
            //printf("move disk %d to rod %d\n", disk, rod);
            for (disk = 1; disk < n-1 ;disk++)
            {
                printf("move disk %d to rod %d\n", disk, rod);
            
            }
            for (disk = 1; disk < n-1 ;disk--)
            {
                printf("move disk %d to rod %d\n", disk, rod);
                if(count==n-1)
                {
                    break;
                }
                count++;
            }
        }*/
    }
    else
    {
        printf("error\n");
    }
}