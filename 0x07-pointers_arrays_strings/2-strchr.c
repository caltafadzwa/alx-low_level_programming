#include <stdio.h>
#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: data
 * @c: data
 * Return: void
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
