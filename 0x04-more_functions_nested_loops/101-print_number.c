#include "main.h"

/**
 * print_number - print an integer
 * @n: variable
 */
void print_number(int n)
{
	unsigned int result = n;

	if (n < 0)
{
	_putchar('-');
	result = -result;
}
	if ((result / 10) > 0)
{
	print_number(result / 10);
}
	_putchar((result % 10) + '0');
}
