#include "main.h"

/**
 * *_strcat - string concatination  super device
 *
 * @*dest: Our final destination
 * @*src: what it might be ?
 *
 * Return : point toward it, the abyss that consume all of us
 */

char *_strcat(char *dest, char *src)
{
	int i,j,k;

	while (i != 2)
	{
		if (*(dest + j) == '\0')
			i++;
		if (i > 0 && i < 2)
		{
			*(dest + j) = *(src + k);
			k++;
		}
		if (*(dest + j) == '\0')
			i++;
		j++;
	}
	return dest;
}
