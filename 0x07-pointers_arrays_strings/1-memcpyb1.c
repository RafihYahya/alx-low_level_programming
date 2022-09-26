#include "main.h"

/**
 * _memcpy - copie la memolyeeee
 *
 * @dest : la destilation 
 * @src : la sorcoration
 * @n : ni
 *
 * Return : my sanity
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	for (i = 0; i <= n; i++)
		*(dest + i) = *(src + i);
	return dest;
}
