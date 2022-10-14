#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all numbers
 * @n: int values
 * @...: more values
 * Return: total sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list number;
	unsigned int i;
	unsigned int sum_all = 0;

	va_start(number, n);
	for (i = 0; i < n; i++)
	sum_all += va_arg(number, int);
	va_end(number);
	return (sum_all);
}
