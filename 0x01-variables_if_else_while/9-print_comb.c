#include "stdio.h"
#include "stdlib.h"

/**
 * main - Entry point
 *
 * Description: A C program that prints with put function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);

		if (i != 9)
			putchar(',');

		putchar(' ');
	}
	return (0);
}
