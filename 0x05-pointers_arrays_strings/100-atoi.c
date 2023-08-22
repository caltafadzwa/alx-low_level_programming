#include "main.h"

/**
 * _atoi -  convert a string to an integer
 * @S: the integer to convert
 * Return: integer
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int nl = 0;
	int min = 1;
	int isl = 0;

	while (s[c])
	{
		if (s[c] == 
