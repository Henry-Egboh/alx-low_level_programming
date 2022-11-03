#include "main.h"

/**
 * _strcat - function
 * @dest: char
 * @src: src
 * Return: Always
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
	i++;
	while ((*(dest + i) = *(src + j)))
{
	i++;
	j++;
}
	return (dest);
}
