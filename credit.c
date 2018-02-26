#include <stdio.h>
#include <cs50.h>

#include <stdio.h>
#include <cs50.h>

int main(void)
{

    long long ccNumber;
    int count = 0;

    // Get user credit card number
    printf("Enter Credit Card Number: ");
    ccNumber = GetLongLong();


    // Loop to iterate over credit card number
    while (ccNumber)
    {
        int digit = ccNumber % 10;



        ++count;
        ccNumber /= 10;
    }

    return 0;
}
