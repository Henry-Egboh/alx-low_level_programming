#include "main.h"
/**
 * print_last_digit - Get the last number
 * @w: Takes input value
 * Return: Always 0 (Success)
 */
int print_last_digit(int w)
{
	int v = w % 10;

	if (v < 0)
{
	v *= -1;
}
	_putchar('0' + v);
	return (v);
}
