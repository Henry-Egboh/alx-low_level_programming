#include "main.h"

/**
 * _strstr - function
 * @haystack: string
 * @needle: string
 * Return: Always
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
{
	return (haystack);
}
	while (*haystack)
{
	i = 0;
	do {
	if (needle[i + 1] == '\0')
{
	return (haystack);
}
	i++;
} while (haystack[i] == needle[i]);
	haystack++;
}
	return ('\0');
}
