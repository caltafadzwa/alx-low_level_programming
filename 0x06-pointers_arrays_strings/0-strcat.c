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
	char dest[] = "Hello";
	char src[] = "World!";

	strcat(dest, src);
	{
		printf("concetenated String; %s\n", dest);
	}
	return (0);
}
