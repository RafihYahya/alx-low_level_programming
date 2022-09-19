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
	int i, t;

	for (t = 0; *s != '\0'; s++)
		t++;
	for (i = 0; i <= t; i++)
		_putchar(*(s - i));
}
