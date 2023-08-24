#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string
 * Return: void
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + 1))
	{
		if (*(s + 1) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
