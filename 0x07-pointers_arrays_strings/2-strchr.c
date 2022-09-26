#include "main.h"

/**
 * _strchr - check for a char in string
 * @s: String
 * @c: character
 * Return: return to first occurrence of char or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
{
	if (s[i] == c)
{
	return (s + i);
}
}
	return ('\0');
}
