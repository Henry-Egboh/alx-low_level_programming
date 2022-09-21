#include "main.h"
/**
 * _strncat - the function
 * @dest: destination
 * @src: source
 * @n: max integer
 * Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
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
