#include "main.h"

/**
 * print_numbers - print num from 0 to 9
 * 
 *
 * Return: no input
 */

void print_numbers(void)
{
	int i;
	for (i = 48; i < 58; i++)
		putchar(&i);
	putchar('\n');
}
