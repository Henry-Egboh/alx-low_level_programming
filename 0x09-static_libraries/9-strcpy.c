#include "main.h"

/**
 * _strcpy - function
 * @dest: dest char
 * @src: src char
 * Return: Always
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
{
	*(dest + i) = *(src + i);
	if (*(src + i) == '\0')
	break;
	i++;
}
	return (dest);
}
