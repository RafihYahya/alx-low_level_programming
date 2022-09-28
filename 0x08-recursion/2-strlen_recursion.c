#include "main.h"

/**
 * _strlen_recursion - recursio abnomuunilao
 *
 * @s: bomijat
 *
 * Return : fuck 
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
