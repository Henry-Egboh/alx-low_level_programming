#include "main.h"

/**
 * _strlen - length
 * @s: value
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	len++;
	return (len);
}
