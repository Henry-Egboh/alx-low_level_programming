#include "main.h"
/**
 * print_line - just print
 * @n: Another var
 */
void print_line(int n)
{
	int p;

	if (n <= 0)
{
	_putchar('\n');
}
	else
{
	for (p = 0; p < n; p++)
	_putchar(95);
	_putchar('\n');
}
}
