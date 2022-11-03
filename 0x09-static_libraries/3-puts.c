#include "main.h"

/**
 * _puts - function
 * @s: string
 */

void _puts(char *s)
{
	while (*s)
	_putchar(*s++);
	_putchar('\n');
}
