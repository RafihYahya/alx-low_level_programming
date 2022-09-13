#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: print value of n status; zero,p,n
 *
 * Return: Always 0(Success)
 */
void print_alphabet (void)
{
int i;
	for (i = 'a'; i <= 'z'; i++)
		_putchar(ch[i]);
	_putchar('\n');
}

int main(void)
{
print_alphabet;
return (0);
}
