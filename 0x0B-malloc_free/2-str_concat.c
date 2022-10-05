#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concat string
 * @s1: char
 * @s2: another char
 * Return: value
 */

char *str_concat(char *s1, char *s2)
{
	char *_str;
	int i, concat = 0, char_len = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
	char_len++;
	_str = malloc(sizeof(char) * char_len);
	if (_str == NULL)
	return (NULL);
	for (i = 0; s1[i]; i++)
	_str[concat++] = s1[i];
	for (i = 0; s2[i]; i++)
	_str[concat++] = s2[i];
	return (_str);
}
