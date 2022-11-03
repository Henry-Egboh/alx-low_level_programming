#include "main.h"

/**
 * _memset - the function
 * @s: string
 * @b: char
 * @n: int
 * Return: Always
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
