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

char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	
	for (ch = 'A' ; ch <= 'Z' ; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
