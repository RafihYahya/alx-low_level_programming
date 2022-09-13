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


int main(void)
{
char ch[] = "_putchar";
int i;
	for (i = 0; i < 8; i++)
		_putchar(ch[i]);
	_putchar('\n');
return (0);
}
