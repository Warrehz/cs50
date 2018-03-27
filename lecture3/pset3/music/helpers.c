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
    char acc;
    int hz, oct;

    if (strlen(note) == 3)
    {
        acc = note[1];
        oct = note[2];
    }
    else
    {
        oct = note[1];
    }

    hz = 440 * (oct - 4);

    if (hz < 0)
    {
        hz *= -1;
    }

    return hz;

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
