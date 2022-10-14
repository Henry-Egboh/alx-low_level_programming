#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings
 * @separator: separate strings
 * @n: number of strings
 * @...: other strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int i;

	va_start(strings, n);
	for (i = 0; i < n; i++)
{
	str = va_arg(strings, char *);
	if (str)
	printf("%s", str);
	else
	printf("(nil)");
	if (i < (n - 1) && separator != NULL)
	printf("%s", separator);
}
	printf("\n");
	va_end(strings);
}
