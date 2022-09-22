#include "main.h"

/**
 * leet - encode string
 * @s: string
 * Return: return s
 */

char *leet(char *s)
{
	int i, j;
	int uppcase[] = {97, 101, 111, 116, 108};
	int lowcase[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	i = 0;
	while (*(s + i) != '\0')
{
	for (j = 0; j <= 4; j++)
{
	if (*(s + i) == uppcase[j] || *(s + i) == lowcase[j])
{
	*(s + i) = num[j];
	break;
}
}
	i++;
}
	return (s);
}
