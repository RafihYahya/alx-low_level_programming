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

char dest[20] = "Miaw mia";
char src[10] = "bobo";
char ans[30];
char *p;
p = &ans[0];

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
		j++;
	}
	return dest;
}
p = *_strcat(&dest[0],&src[0]);
printf("solution,is %s ,\n",dest);
return 0;
}