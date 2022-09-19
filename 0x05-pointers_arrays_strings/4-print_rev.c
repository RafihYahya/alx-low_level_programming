#include "main.h"

/**
 * print_rev - print le reversino du puta mimo
 *
 * @s: pointer that point o freedom
 *
 * Return: no return for the maidenless
 */

void print_rev(char *s)
{
	int lg,i;

	lg = _strlen(*s);
	for (i = lg; i <= 0; i--)
		_putchar(*(s+i));
}
