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
		int n, fst_dig;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		fst_dig = n % 10;

		if (fst_dig > 5)

			printf("Last digit of %i is %i and is greater than 5\n", n, fst_dig);

		else if (fst_dig == 0)

			printf("Last digit of %i is %i and is 0\n", n, fst_dig);

		else if (fst_dig < 6 && fst_dig != 0)

			printf("Last digit of %i is %i and is less then 6 and not 0\n", n, fst_dig);

		return (0);
}
