#include "main.h"

/**
 * islower - function that check if  the alphabet is lowecase
 *
*/

int _islower(int c)
{
    for (int i = 'a'; i < 'z'; i++)
    {
        if (c == i)
        {
            return (1);
        }
        else
        {
            return (0);
        }
    }
}