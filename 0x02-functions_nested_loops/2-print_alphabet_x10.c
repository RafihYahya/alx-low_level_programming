#include "main.h"

/**
 * print_alphabet_x10 - use printchar to print lowercase number 10 times
 */


 void print_alphabet_x10(void)
 {
int j;
    for (j = 0; j <= 10 ; j++)
    {
    int i;
	    for (i = 'a'; i <= 'z'; i++)
		    _putchar(i);
    }
    _putchar('\n');
 }