#include "main.h"

/**
 * rot13 - encodes a string
 * @s: value
 * Return: return pointer
 */

char *rot13(char *s)
{
	int i = 0, j;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + i) != '\0')
{
	for (j = 0; j < 52; j++)
{
	if (*(s + i) == alph[j])
{
	*(s + i) = rot13[j];
	break;
}
}
	i++;
}
	return (s);
}
