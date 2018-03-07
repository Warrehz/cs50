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

    // Set key equal to second command line argument
    string k = argv[1];

    // Get plaintext from user
    string p = get_string("plaintext: ");

    // Loop over length of string p
    for (int i = 0, n = strlen(p); i < n; i++)
    {
        printf("%c", p[i]);
    }
}
