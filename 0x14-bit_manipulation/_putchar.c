#include "main.h"
#include <unistd.h>

/**
 * _putchar - print int
 * @c: input
 * Return: value
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
