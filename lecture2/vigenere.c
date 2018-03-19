// Implementation of Vigenere cipher

#include <cs50.h>
#include <ctype.h>
#include<stdio.h>
#include<string.h>

int main(int argc, string argv[])
{
    // Check for correct number of args and ensure all letters
    if (argc != 2)
    {
        printf("error: wrong number of arguments\n");
        return 1;
    }
    else
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (!isalpha(argv[1][i]))
            {
                printf("error: string must be all letters\n");
                return 1;
            }
        }
    }

    // Sets key to user input and store length
    string key = argv[1];
    int keyLen = strlen(key);

    // Get plaintext from user
    string p = get_string("plaintext: ");

    // Loop over length of string p
    for (int i = 0, j = 0, n = strlen(p); i < n; i++)
    {

        // Gets key to apply to letter
        int letterKey = tolower(key[j % keyLen]) - 'a';

        if (islower(p[i]))
        {
            // Formula for finding ciper letter based on key
            printf("%c", 'a' + (p[i] - 'a' + letterKey) % 26);
            j++;
        }
        else if (isupper(p[i]))
        {
            printf("%c", 'A' + (p[i] - 'A' + letterKey) % 26);
            j++;

        }
        else
        {
            // Print char not upper or lower alpha
            printf("%c", p[i]);
        }
    }

    printf("\n");
    printf("KEY: %s\n", key);

    return 0;
}
