#include "main.h"

/**
 * _puts - fuction that puts
 *
 * @str : inputitot
 *
 * return: My future wife
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
