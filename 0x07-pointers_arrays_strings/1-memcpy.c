#include "main.h"

/**
 * _memcpy - function to copy memory
 * @dest: destination
 * @src: source
 * @n: size
 * Return: return to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
{
	dest[i] = src[i];
}
	return (dest);
}
