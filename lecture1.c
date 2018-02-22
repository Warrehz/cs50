// Simple hello world program
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prints hello, world once
    printf("hello, world\n");

    // Loop that forever prints hello world
    while (true)
    {
        printf("hello, world\n");
    }

    // Loop that prints hello, world 50 times
    for (int i = 0; i < 50; i++)
    {
        printf("hello, world\n");
    }

    // Pset 1

    // Implementation of Mario - more comfortable
    int height;

    do
    {
        printf("Enter a height: ");
        height = GetInt();
    } while (height < 1 || height >= 24);

    for (int i = 0; i < height; i++)
    {

        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }

        printf("  ");

        for (int m = 0; m < i + 1; m++)
        {
            printf("#");
        }

        printf("\n");
    }


}
