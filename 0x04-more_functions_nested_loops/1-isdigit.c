#include "main.h"

/**
 * _isdigit - checks if input is digit
 *
 * @c:input
 *
 * Return: 1 if digit 0 for not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
