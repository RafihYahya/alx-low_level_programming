#include "main.h"

/**
 * _puts_recursion - puts but in  recursion
 *
 * @s : balabomba mino pini
 *
 * Return : your mom
 */

void _puts_recursion(char *s)
{
	if ( *s == '\0' )
	{
		_putchar(*s);
		s = (s + 1);
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
