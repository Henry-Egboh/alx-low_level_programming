#include "main.h"
/**
 * print_rev - in reverse order
 * @s: the string
 */
void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
{
	if (s[count] == '\0')
	break;
	count++;
}
	for (count = count - 1; count >= 0; count--)
	_putchar(s[count]);
	_putchar('\n');
}
