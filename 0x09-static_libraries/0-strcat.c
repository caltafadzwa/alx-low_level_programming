#include "main.h"
#include <stdio.h>

/**
 * _strcat - appends the src string to the dest string
 * @src: the string in question
 * @dest: the destination
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*dest != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (s);
}
