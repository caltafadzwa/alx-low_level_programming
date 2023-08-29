#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: data entry
 * @accept: data entry
 * Return: void
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value, check;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[1])
			{
				value++;
				check = 1;
			}
		}
	}
}
