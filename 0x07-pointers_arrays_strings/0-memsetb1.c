#include "main.h"

/**
 * _memset - function the fill memo with bimo
 *
 * @s : firsto
 * @b : secondo
 * @n : thridoooo
 *
 * Return : freedomo
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i <= n; i++)
		*(s + i) = b;
	return (s);
}
