// Simple Ceasar cipher code for strings

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{

    int k;
    string plaintext;

    if (argc == 2)
    {
        // Converts string into integers
        k = atoi(argv[1]);
    }
    else
    {
        // Prints error if argc length is not 2
        printf("error: invalid number of commands given\n");
        return 1;
    }

    // Finds how many times to rotate char when k > 26
    while (k >= 26)
    {
        k-=26;
    }

    // Get plaintext from user
    plaintext = get_string("plaintext: ");

    // Convert plaintext to cipher text using k
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (islower(plaintext[i]))
        {
            plaintext[i] = (((plaintext[i] + k) - 97) % 26) + 97;
        }
        else if (isupper(plaintext[i]))
        {
            plaintext[i] = (((plaintext[i] + k) - 65) % 26) + 65;
        }
    }
    printf("ciphertext: %s\n", plaintext);

    return 0;

}
