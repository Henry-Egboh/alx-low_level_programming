#include "main.h"
#include <stdlib.h>

/**
 * create_array - an array function
 * @size: size of integer
 * @c: char c
 * Return: Always 0
 */

char *create_array(unsigned int size, char c)
{
	char *cc;
	unsigned int x;

	if (size == 0)
	return (NULL);
	cc = malloc(sizeof(c) * size);
	if (cc == NULL)
	return (NULL);
	for (x = 0; x < size; x++)
	cc[x] = c;
	return (cc);
}
