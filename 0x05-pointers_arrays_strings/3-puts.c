#include "main.h"

/**
 * _puts - prints a string
 * @str: the string to print
 *
 * Return: the length of string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar ('\n');
}
