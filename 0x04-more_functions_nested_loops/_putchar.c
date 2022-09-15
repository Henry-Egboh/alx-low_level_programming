#include <unistd.h>
#include "main.h"
/**
 * _putchar - print output
 * @c: value of argument
 * Return: Value of output
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
