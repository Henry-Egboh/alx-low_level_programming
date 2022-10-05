#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer
 * @str: string input
 * Return: value
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int x, y;

	if (str == NULL)
	return (NULL);
	for (x = 0; str[x] != '\0'; x++)
	;
	s = (char *)malloc(sizeof(char) * (x + 1));
	if (s == NULL)
	return (NULL);
	for (y = 0; y <= x; y++)
	s[y] = str[y];
	return (s);
}
