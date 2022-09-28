#include "main.h"

/**
 * _print_rev_recursion - reverse recursio
 *
 * @s : bibo moko
 *
 * Returno: la vivo
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		i++;
		_print_rev_recursion(s + 1);
		_print_rev_recursion(s - 1);
	}
	else
	{
		_putchar('\n');
	}
