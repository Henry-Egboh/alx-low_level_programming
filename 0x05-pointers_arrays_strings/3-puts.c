#include "main.h"
/**
 * _puts - print to stdout
 * @str: the string
 */
void _puts(char *str)
{
	while (*str)
	_putchar(*str++);
	_putchar('\n');
}
