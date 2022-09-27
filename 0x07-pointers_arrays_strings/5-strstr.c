#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: return a pointer or NULL
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
