#include "main.h"

/**
 * factorial - facto
 *
 * @n:mimo
 *
 * Return: nbi
 */

int factorial(int n)
{
	if (n > 0)
		return (n*factorial(n - 1));
	else if (n == 0)
		return (1);
	else (n < 0)
		return (-1);
}
