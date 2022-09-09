#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print value of n status; zero,p,n
 *
 * Return: Always 0(Success)
 */


int main(void)
{

int i;
	for (i = 48; i <= 102; i++)
	{
		putchar(i);
		if (i == 57)		
			i += 39;
	}

	printf("\n");
	return (0);
}
