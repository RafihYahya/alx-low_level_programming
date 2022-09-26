#include "main.h"

/**
 * _strchr - locate a character ,kinda sad
 *
 * @s : first as usual
 * @c : the one we asre looking for
 *
 * Return : freedom
 */

char *_strchr(char *s, char c)
{
	int t;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if ( *(s + i) == c)
			break;
	}
	if ( *s == '\0')
	{
		return NULL;
	}
	else
	{
		return s;
	}
}
