#include "main.h"
/**
 * print_most_numbers - exclude some numbers
 */
void print_most_numbers(void)
{
	int v;

	for (v = 0; v <= 9; v++)
{
	if (v != 2 && v != 4)
{
	_putchar(v + '0');
}
}
	_putchar('\n');
}
