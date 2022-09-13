#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - use printchar to print lowercase number
 */

void print_alphabet(void)
{
int i;
	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
