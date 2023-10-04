#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: char to check
 * description: this will return the length of a string
 * Return: 0 (Success)
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
