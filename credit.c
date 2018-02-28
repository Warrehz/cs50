#include <stdio.h>
#include <cs50.h>

int main(void)
{

    long long ccnumber;
    int addSum = 0;
    int onesDigit, tensDigit, prodSum;

    // Get user credit card number
    printf("Enter Credit Card Number: ");
    ccnumber = GetLongLong();

    // Iterate over ccnumber and add every other num starting with last
    for (int i = ccnumber; i > 0; i /= 100)
    {
        addSum += i % 10;
    }

    // Iterate over ccnumber, multiply every other num starting with second to last
    for (int i = ccnumber; i > 0; i /= 100)
    {
        int digit = i /10 % 10;

        prodSum = digit * 2;

        // Calculate the num in each digit space
        onesDigit = prodSum % 10;
        tensDigit = (prodSum - onesDigit) / 10;

        printf("%i\n", onesDigit);
        printf("%i\n", tensDigit);

    }

    return 0;
}
