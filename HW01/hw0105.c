#include <stdio.h>
#include <stdint.h>

int main()
{
    int32_t card1 = 0, card2 = 0, card3 = 0, card4 = 0, card5 = 0;

    printf("Please enter 5 cards: ");
    scanf("%d %d %d %d %d", &card1, &card2, &card3, &card4, &card5);

    /* restriction */
    // card number: in 1-52
    if ((card1<1 | card1> 52) | (card2<1 | card2> 52) | (card3<1 | card3> 52) | (card4<1 | card4> 52) | (card5<1 | card5> 52))
    {
        printf("error\n");
    }
    // card number: differnet
    else if (card1 == card2 | card1 == card3 | card1 == card4 | card1 == card5 | card2 == card3 | card2 == card4 | card2 == card5 | card3 == card4 | card3 == card5 | card4 == card5)
    {
        printf("error\n");
    }
    else
    {
        // sort CARD
        int32_t tem = 0;
        if (card1 > card2)
        {
            tem = card2;
            card2 = card1;
            card1 = tem;
            tem = 0;
        }
        if (card2 > card3)
        {
            tem = card3;
            card3 = card2;
            card2 = tem;
            tem = 0;
        }
        if (card3 > card4)
        {
            tem = card4;
            card4 = card3;
            card3 = tem;
            tem = 0;
        }
        if (card4 > card5)
        {
            tem = card5;
            card5 = card4;
            card4 = tem;
            tem = 0;
        }
        if (card1 > card2)
        {
            tem = card2;
            card2 = card1;
            card1 = tem;
            tem = 0;
        }
        if (card2 > card3)
        {
            tem = card3;
            card3 = card2;
            card2 = tem;
            tem = 0;
        }
        if (card3 > card4)
        {
            tem = card4;
            card4 = card3;
            card3 = tem;
            tem = 0;
        }
        if (card4 > card5)
        {
            tem = card5;
            card5 = card4;
            card4 = tem;
            tem = 0;
        }
        if (card1 > card2)
        {
            tem = card2;
            card2 = card1;
            card1 = tem;
            tem = 0;
        }
        if (card2 > card3)
        {
            tem = card3;
            card3 = card2;
            card2 = tem;
            tem = 0;
        }
        if (card3 > card4)
        {
            tem = card4;
            card4 = card3;
            card3 = tem;
            tem = 0;
        }
        if (card4 > card5)
        {
            tem = card5;
            card5 = card4;
            card4 = tem;
            tem = 0;
        }
        if (card1 > card2)
        {
            tem = card2;
            card2 = card1;
            card1 = tem;
            tem = 0;
        }
        if (card2 > card3)
        {
            tem = card3;
            card3 = card2;
            card2 = tem;
            tem = 0;
        }
        if (card3 > card4)
        {
            tem = card4;
            card4 = card3;
            card3 = tem;
            tem = 0;
        }
        if (card4 > card5)
        {
            tem = card5;
            card5 = card4;
            card4 = tem;
            tem = 0;
        }
        // printf("card: %d %d %d %d %d \n", card1, card2, card3, card4, card5);
        /* suit 0 spade 1 heart 2 diamond 3 club*/
        int32_t card1_suit = 0, card2_suit = 0, card3_suit = 0, card4_suit = 0, card5_suit = 0;
        card1_suit = card1 / 13;
        card2_suit = card2 / 13;
        card3_suit = card3 / 13;
        card4_suit = card4 / 13;
        card5_suit = card5 / 13;
        /* number */
        int32_t card1_num = 0, card2_num = 0, card3_num = 0, card4_num = 0, card5_num = 0;
        card1_num = card1 % 13;
        card2_num = card2 % 13;
        card3_num = card3 % 13;
        card4_num = card4 % 13;
        card5_num = card5 % 13;
        /* fixed */
        // card = 13*n (n=1,2,3,...)
        // num=13, suit=suit-1
        if (card1_num == 0)
        {
            card1_num = 13;
            card1_suit -= 1;
        }
        if (card2_num == 0)
        {
            card2_num = 13;
            card2_suit -= 1;
        }
        if (card3_num == 0)
        {
            card3_num = 13;
            card3_suit -= 1;
        }
        if (card4_num == 0)
        {
            card4_num = 13;
            card4_suit -= 1;
        }
        if (card5_num == 0)
        {
            card5_num = 13;
            card5_suit -= 1;
        }

        // printf("num: %d %d %d %d %d\n", card1_num, card2_num, card3_num, card4_num, card5_num);
        // printf("suit: %d %d %d %d %d\n", card1_suit, card2_suit, card3_suit, card4_suit, card5_suit);

        int32_t condition = 0;
        // 9. High card 皆無相同數字
        condition = 9;
        // 8. One pair 僅兩張數字相同
        if (card1_num == card2_num | card1_num == card3_num | card1_num == card4_num | card1_num == card5_num | card2_num == card3_num | card2_num == card4_num | card2_num == card5_num | card3_num == card4_num | card3_num == card5_num | card4_num == card5_num)
        {
            condition = 8;
        }
        // 7. Two pair 兩對兩張數字相同
        if ((card1_num == card2_num && card3_num == card4_num) | (card1_num == card3_num && card2_num == card4_num) | (card1_num == card4_num && card2_num == card3_num) | (card1_num == card2_num && card3_num == card5_num) | (card1_num == card3_num && card2_num == card5_num) | (card1_num == card5_num && card2_num == card3_num) | (card1_num == card2_num && card5_num == card4_num) | (card1_num == card5_num && card2_num == card4_num) | (card1_num == card4_num && card2_num == card5_num) | (card1_num == card5_num && card3_num == card4_num) | (card1_num == card3_num && card5_num == card4_num) | (card1_num == card4_num && card5_num == card3_num) | (card5_num == card2_num && card3_num == card4_num) | (card5_num == card3_num && card2_num == card4_num) | (card5_num == card4_num && card2_num == card3_num))
        {
            condition = 7;
        }
        // 6. Three of a kind 僅三張數字相同
        if ((card1_num == card2_num && card2_num == card3_num) | (card1_num == card2_num && card2_num == card4_num) | (card1_num == card2_num && card2_num == card5_num) | (card1_num == card3_num && card3_num == card4_num) | (card1_num == card3_num && card3_num == card5_num) | (card1_num == card4_num && card4_num == card5_num) | (card2_num == card3_num && card3_num == card4_num) | (card2_num == card3_num && card3_num == card5_num) | (card3_num == card4_num && card4_num == card5_num))
        {
            condition = 6;
        }
        // 5. Straight 五張照順序
        // sort card number
        tem = 0;
        if (card1_num > card2_num)
        {
            tem = card2_num;
            card2_num = card1_num;
            card1_num = tem;
        }
        if (card2_num > card3_num)
        {
            tem = card3_num;
            card3_num = card2_num;
            card2_num = tem;
        }
        if (card3_num > card4_num)
        {
            tem = card4_num;
            card4_num = card3_num;
            card3_num = tem;
        }
        if (card4_num > card5_num)
        {
            tem = card5_num;
            card5_num = card4_num;
            card4_num = tem;
        }
        if (card1_num > card2_num)
        {
            tem = card2_num;
            card2_num = card1_num;
            card1_num = tem;
        }
        if (card2_num > card3_num)
        {
            tem = card3_num;
            card3_num = card2_num;
            card2_num = tem;
        }
        if (card3_num > card4_num)
        {
            tem = card4_num;
            card4_num = card3_num;
            card3_num = tem;
        }
        if (card4_num > card5_num)
        {
            tem = card5_num;
            card5_num = card4_num;
            card4_num = tem;
        }
        if (card1_num > card2_num)
        {
            tem = card2_num;
            card2_num = card1_num;
            card1_num = tem;
        }
        if (card2_num > card3_num)
        {
            tem = card3_num;
            card3_num = card2_num;
            card2_num = tem;
        }
        if (card3_num > card4_num)
        {
            tem = card4_num;
            card4_num = card3_num;
            card3_num = tem;
        }
        if (card4_num > card5_num)
        {
            tem = card5_num;
            card5_num = card4_num;
            card4_num = tem;
        }
        if (card1_num > card2_num)
        {
            tem = card2_num;
            card2_num = card1_num;
            card1_num = tem;
        }
        if (card2_num > card3_num)
        {
            tem = card3_num;
            card3_num = card2_num;
            card2_num = tem;
        }
        if (card3_num > card4_num)
        {
            tem = card4_num;
            card4_num = card3_num;
            card3_num = tem;
        }
        if (card4_num > card5_num)
        {
            tem = card5_num;
            card5_num = card4_num;
            card4_num = tem;
        }
        //straight
        int32_t straight_flush = 0;
        if (card5_num - card1_num == 4 | (card1_num == 1 && card2_num == 10 && card3_num == 11 && card4_num == 12 && card5_num == 13))
        {
            straight_flush++;
            condition = 5;
        }
        // 4. Flush 五張同花色
        if (card1_suit == card2_suit && card2_suit == card3_suit && card3_suit == card4_suit && card4_suit == card5_suit)
        {
            straight_flush++;
            condition = 4;
        }
        // 3. Full house 三張數字+兩張數字相同
        if ((card1_num == card2_num && card2_num == card3_num && card4_num == card5_num) | (card1_num == card2_num && card2_num == card4_num && card3_num == card5_num) | (card1_num == card2_num && card2_num == card5_num && card3_num == card4_num) | (card1_num == card3_num && card3_num == card4_num && card2_num == card5_num) | (card1_num == card3_num && card3_num == card5_num && card2_num == card4_num) | (card1_num == card4_num && card4_num == card5_num && card2_num == card3_num) | (card2_num == card3_num && card3_num == card4_num && card1_num == card5_num) | (card2_num == card3_num && card3_num == card5_num && card1_num == card4_num) | (card2_num == card4_num && card4_num == card5_num && card1_num == card3_num) | (card3_num == card4_num && card4_num == card5_num && card1_num == card2_num))
        {
            condition = 3;
        }
        // 2. Four of a kind 四張數字相同
        if ((card1_num == card2_num && card2_num == card3_num && card3_num == card4_num) | (card1_num == card2_num && card2_num == card3_num && card3_num == card5_num) | (card1_num == card2_num && card2_num == card5_num && card5_num == card4_num) | (card1_num == card5_num && card5_num == card3_num && card3_num == card4_num) | (card5_num == card2_num && card2_num == card3_num && card3_num == card4_num))
        {
            condition = 2;
        }
        // 1. Straight flush 五張同花色+照順序
        if (straight_flush == 2)
        {
            condition = 1;
        }
        /* OUTPUT */
        switch (condition)
        {
        case 1:
            printf("Straight flush\n");
            break;
        case 2:
            printf("Four of a kind\n");
            break;
        case 3:
            printf("Full house\n");
            break;
        case 4:
            printf("Flush\n");
            break;
        case 5:
            printf("Straight\n");
            break;
        case 6:
            printf("Three of a kind\n");
            break;
        case 7:
            printf("Two pair\n");
            break;
        case 8:
            printf("One pair\n");
            break;
        case 9:
            printf("High card\n");
            break;
        default:
            break;
        }
    }
    return 0;
}