#include "main.h"
#include <stdio.h>

/**
 * swap_int - that swaps the values of two integers
 *
 * @a: first int
 * @b: second int
 * Owned by Bwave
 * Return: 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
