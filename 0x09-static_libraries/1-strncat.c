#include "main.h"

/**
 * _strncat - functions
 * @dest: string
 * @src: string
 * @n: int value
 * Return: a value
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + 1))
	i++;
	while (j < n && *(src + j))
{
	*(dest + i) = *(src + j);
	i++;
	j++;
}
	if (j > n)
	*(dest + i) = *(src + j);
	return (dest);
}
