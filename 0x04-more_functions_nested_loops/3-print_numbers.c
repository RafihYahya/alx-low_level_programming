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
	for (i = 0; i < 9; i++)
		putchar(i + 48);
	putchar('\n');
}
