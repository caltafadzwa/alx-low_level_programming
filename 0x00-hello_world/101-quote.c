#include <stdio.h>
#include <unistd.h>

/**
 * main - a programm that prints
 * Return: 1 if Success
 */

int main(void)
{
	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
