#include "main.h"
/**
 * _strlen - get the length
 * @s: the string
 * Return: return length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}
