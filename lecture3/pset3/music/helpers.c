// Helper functions for music

#include <cs50.h>
#include <stdlib.h>
#include <string.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{

    int num = fraction[0];
    int den = fraction[2];
    int duration = num * 8 / den;

    return duration;

}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    // TODO
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    if (strncmp(s, "", 1) < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
