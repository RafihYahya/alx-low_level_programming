#include "main.h"

/**
 * _sqrt_recursion - miawtabaw
 *
 * @n : lolita m7amra
 *
 * Return: lah ijib
 */

int cstn(int n)
{
	int *p;
	p = &n;
	*p = *p + 1;
	return (n + *p);
}

int _sqrt_recursion(int n)
{
	int i;
	if (n <= 0)
		return (-1);
	i = n*n;
	if (i == cstn(n))
		return (n);
	return (_sqrt_recursion(n - 1));
}	
