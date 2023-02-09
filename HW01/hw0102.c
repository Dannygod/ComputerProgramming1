#include <stdio.h>
#include <stdint.h>

int main()
{
    int32_t first, second, result;
    int32_t f1,f2,f3;//百 十 個
    int32_t s1,s2,s3;//百 十 個
    printf ("Please enter the first number:");
    scanf ("%d",&first);
    printf ("Please enter the second number:");
    scanf ("%d",&second);
    f1=first/100;
    f2=(first/10)%10;
    f3=first%10;
    s1=second/100;
    s2=(second/10)%10;
    s3=second%10;
    if (first>=second && first<1000 && second<1000 && first>99 && second>99)//第一>=第二 &三位數限制
    {
        result=first-second;
        if ((first/10)==(second/10))//百位數與十位數相等 空白數為7 result為一位數
        {    
            printf ("   %d %d %d\n-) %d %d %d\n--------\n       %d\n",f1,f2,f3,s1,s2,s3,result);
        }
        else if((first/100)==(second/100))//僅百位數相等 空白數為5 result為二位數
        {
            printf ("   %d %d %d\n-) %d %d %d\n--------\n     %d %d\n",f1,f2,f3,s1,s2,s3,result/10,result%10);
        }
        else//三位數皆不同 空白數為3 result為三位數
        {
            printf ("   %d %d %d\n-) %d %d %d\n--------\n   %d %d %d\n",f1,f2,f3,s1,s2,s3,result/100,(result/10)%10,result%10);
        }
    }
    else if (first<second && first<1000 && second<1000 && first>99 && second>99) //第一<第二 &三位數限制
    {
        result=second-first;
        if ((first/10)==(second/10))//百位數與十位數相等 空白數為7 result為一位數
        {    
            printf ("   %d %d %d\n-) %d %d %d\n--------\n -     %d\n",f1,f2,f3,s1,s2,s3,result);
        }
        else if((first/100)==(second/100))//僅百位數相等 空白數為5 result為二位數
        {
            printf ("   %d %d %d\n-) %d %d %d\n--------\n -   %d %d\n",f1,f2,f3,s1,s2,s3,result/10,result%10);
        }
        else//三位數皆不同 空白數為3 result為三位數
        {
            printf ("   %d %d %d\n-) %d %d %d\n--------\n - %d %d %d\n",f1,f2,f3,s1,s2,s3,result/100,(result/10)%10,result%10);
        }
    }
    else
    {
        printf("error\n");
    }
}