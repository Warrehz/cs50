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
    //char m_note = note[0];
    int acc, hz, oct;

    // Sets octave to last in string
    oct = note[strlen(note) - 1];
    // Accounts for position in ascii table
    oct -= 48;

    // Sets accidental to second in array if length is 3
    if (strlen(note) == 3)
    {
        acc = note[1];
    }
    else
    {
        acc = 0;
    }

    hz = 440 * ((oct - 4) + 1);

    if (hz < 0)
    {
        hz *= -1;
    }

    switch (expression)
    {
        case 'C' :
        // formula for frequency
        break;
    }

    return hz;

}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    if (strncmp(s, "", 1))
    {
        return false;
    }
    else
    {
        return true;
    }
}
