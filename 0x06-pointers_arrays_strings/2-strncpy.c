#include "main.h"

/**
 * _strncpy - copy a string
 * @src: source
 * @dest: destination
 * @n: max byte
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
	while (i < n)
{
	*(dest + i) = '\0';
	i++;
}
	return (dest);
}
