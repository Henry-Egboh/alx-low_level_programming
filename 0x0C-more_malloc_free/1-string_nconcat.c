#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function
 * @s1: char
 * @s2: char
 * @n: integer
 * Return: A value
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int strn, i;

	strn = n;
	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	for (i = 0; s1[i]; i++)
	strn++;
	cat = malloc(sizeof(char) * (strn + 1));
	if (cat == NULL)
	return (NULL);
	strn = 0;
	for (i = 0; s1[i]; i++)
	cat[strn++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
	cat[strn++] = s2[i];
	cat[strn] = '\0';
	return (cat);
}
