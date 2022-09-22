#include <stdio.h>
#include <stdlib.h>

/**
 * *_strcat - string concatination  super device
 *
 * @*dest: Our final destination
 * @*src: what it might be ?
 *
 * Return : point toward it, the abyss that consume all of us
 */
int main()
{

char dest[40] = "Miaw mia";
char src[10] = "bobo";
char *p;

char *_strcat(char *dest, char *src)
{
	int i,j,k;

	while (i != 2)
	{
		if (*(dest + j) == '\0' && i == 0)
			i++;
		if (i > 0 )
		{
			*(dest + j) = *(src + k);
			if (*(src + k) == '\0')
			{
				break;
			}
			k++;
		}
		j++;
	}
	return dest;
}
p = *_strcat(dest, src);
printf("solution,is %s",p);
printf("\n");
return 0;
}