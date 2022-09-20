#include "main.h"
/**
 * _strcpy - copy strings
 * @dest: destination
 * @src: Source
 * Return: Return pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
{
	dest[i] = src[i];
	i++;
}
	return (dest);
}
