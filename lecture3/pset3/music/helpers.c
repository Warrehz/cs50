// Helper functions for music

#include <cs50.h>
#include <math.h>
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
    int acc, oct;
    double hz = 0.0;

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

    // Calcluates hz of major notes, not accounting for accidentals or oct
    switch(note[0])
    {
        case 'C' :
            hz = 440 / (pow(2.0, (9.0 / 12.0)));
            break;

        case 'D' :
            hz = 440 / (pow(2.0, (7.0 / 12.0)));
            break;

        case 'E' :
            hz = 440 / (pow(2.0, (5.0 / 12.0)));
            break;

        case 'F' :
            hz = 440 / (pow(2.0, (4.0 / 12.0)));
            break;

        case 'G' :
            hz = 440 / (pow(2.0, (2.0 / 12.0)));
            break;

        case 'A' :
            hz = 440;
            break;

        case 'B' :
            hz = 440 * (pow(2.0, (2.0 / 12.0)));
            break;

        default :
            return 0;

    }

    // Accounts for sharp and flat notes
    if (acc == 98)
    {
        hz /= pow(2.0, (1.0 / 12.0));
    }
    else if (acc == 35)
    {
        hz *= pow(2.0, (1.0 / 12.0));
    }

    // Accounts for octaves
    if (oct < 4)
    {
        hz /= pow(2.0, (4 - oct));
    }
    else if (oct > 4)
    {
        hz *= pow(2.0, (oct - 4));
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
