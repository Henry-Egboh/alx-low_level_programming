#include "main.h"

/**
 * _strlen - string length
 * @s: strings
 * Return: value
 */

int _strlen(char *s)
{
	if (*s == '\0')
	return (0);
	else
	return (1 + _strlen(s + 1));
}

/**
 * _strcheck - compare strings
 * @s: input string
 * @i: iterator
 * @j: iterator
 * Return: value
 */

int _strcheck(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
{
	if (i == j || i == j + 1)
	return (1);
	return (0 + _strcheck(s, i + 1, j - 1));
}
	return (0);
}

/**
 * is_palindrome - check palindrome string
 * @s: strings to check
 * Return: return value
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	return (1);
	return (_strcheck(s, 0, _strlen(s) - 1));
}
