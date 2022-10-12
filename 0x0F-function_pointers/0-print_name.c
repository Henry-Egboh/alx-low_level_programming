#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: a name
 * @f: pointer function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
