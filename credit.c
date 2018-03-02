/* Simple implementation of the Luhn algorithm to check for valid credit card
   numbers */

#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{

    long long ccnumber;
    int addSum = 0;
    int digitSum = 0;
    int digit = 0;
    int digits = 0;
    int onesDigit, tensDigit, prodSum, finalSum;

    // Get user credit card number
    do
    {
        printf("Enter Credit Card Number: ");
        ccnumber = GetLongLong();
    }
    while(ccnumber < 0);


    long long tempcc = ccnumber;

    // Find num of digits in CC number
    while (tempcc >= 1)
    {
        tempcc = tempcc / 10;
        ++digits;
    }

    tempcc = ccnumber;

    // Find sum of every other digit starting with last
    for (int i = 0; i < digits; i++)
    {
        addSum += tempcc % 10;
        tempcc /= 100;

    }

    tempcc = ccnumber;

    // Find sum of digit * 2 for every other num starting with second to last
    for (int i = 0; i < floor(digits / 2); i++)
    {
        if (i == 0)
        {
            tempcc /= 10;
        }
        else
        {
            tempcc /= 100;
        }

        digit = tempcc % 10;
        prodSum = digit * 2;
        onesDigit = prodSum % 10;
        tensDigit = (prodSum - onesDigit) / 10;
        digitSum += onesDigit + tensDigit;

    }

    finalSum = digitSum + addSum;


    // If card is valid, determine what type of card used
    if (finalSum % 10 != 0 || ccnumber == 0)
    {
        printf("WARNING: NOT A VALID CARD\n");
    }
    else
    {
        if (digit == 4)
        {
            printf("VISA\n");
        }
        if (digits == 15)
        {
            printf("AMEX\n");
        }
        if (ccnumber > 5100000000000000 && ccnumber < 5600000000000000)
        {
            printf("MASTERCARD\n");
        }
    }

    return 0;
}
