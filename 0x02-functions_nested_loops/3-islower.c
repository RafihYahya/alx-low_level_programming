#include "main.h"

/**
 * _islower - function that check if  the alphabet is lowecase
 *
 *@c: checks input
 *
 *Return: return 1 if true, else 0
 *
*/

int _islower(int c)
{
    int i;

    for (i = 'a'; i < 'z'; i++)
    {
        if (c == i)
            return (1);
    }
return (0);
}
