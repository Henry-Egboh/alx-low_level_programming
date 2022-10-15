#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct printer - prints
 * @symbol: symbol representation
 * @print: function pointers
 */

typedef struct pre
{
	char *symbol;
	void (*print)(va_list arg);
} pre_t;

void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
#endif
