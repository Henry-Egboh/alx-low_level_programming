#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


void _char(va_list arg);
void _integer(va_list arg);
void _float(va_list arg);
void _strings(va_list arg);
void print_all(const char * const format, ...);

/**
 * _char - print char
 * @arg: input
 */

void _char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * _integer - print int
 * @arg: input
 */

void _integer(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	printf("%d", i);
}

/**
 * _float - print float
 * @arg: input
 */

void _float(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}

/**
 * _strings - print string
 * @arg: input
 */

void _strings(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
{
	printf("(nil)");
}
	printf("%s", s);
}

/**
 * print_all - function
 * @format: input
 * @...: more input
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	int x = 0, y;
	char *separator = "";
	pre_t p_all[] = {
	{"c", _char},
	{"i", _integer},
	{"f", _float},
	{"s", _strings},
};
	va_start(arg, format);
	while (format && (*(format + x)))
{
	y = 0;

	while (y < 4 && (*(format + x) != *(p_all[y].symbol)))
	y++;
	if (y < 4)
{
	printf("%s", separator);
	p_all[y].print(arg);
	separator = ", ";
}
	x++;
}
	printf("\n");
	va_end(arg);
}
