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

	for (i = 0; i <= 8; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}

	putchar(9 +'0');

	return (0);
}
