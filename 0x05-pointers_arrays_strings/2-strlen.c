#include "main.h"

/**
 * _strlen - function that give u true love and length of string
 *
 * @s: le char
 *
 * Return: true love
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;

	return (i);
}
