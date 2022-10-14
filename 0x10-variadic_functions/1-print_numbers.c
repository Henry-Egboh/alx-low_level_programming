#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers
 * @separator: string to be printed between numbers
 * @n: int value
 * @...: more values
 * Return: value
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list number;
	unsigned int i;

	va_start(number, n);
	for (i = 0; i < n; i++)
{
	printf("%d", va_arg(number, int));
	if (separator != NULL && i != (n - 1))
	printf("%s", separator);
}
	printf("\n");
	va_end(number);
}
