#include "main.h"
/**
 * rev_string - reverse string
 * @s: argument 
 */
void rev_string(char *s)
{
	int i, j;
	char ch;

	i = 0;
	j = 0;
	while (s[j++])
{
	i++;
}
	for (j = i-1; j >= i / 2; j--)
{
	ch = s[j];
	s[j] = s[i - j - 1];
	s[i - j - 1] = ch;
}
}
