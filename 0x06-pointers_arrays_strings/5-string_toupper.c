#include "main.h"
/**
 * string_toupper - convert function
 * @str: string to be converted
 * Return: point back to string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
{
	if (str[i] >= 'a' && str[i] <= 'z')
	str[i] -= 32;
	i++;
}
	return (str);
}
