#include "main.h"
#include <stdio.h>

/**
 * _strncat - that concatenates two strings
 * @src: the source of the file
 * @dest: the destination concerned
 * @n: integer
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
