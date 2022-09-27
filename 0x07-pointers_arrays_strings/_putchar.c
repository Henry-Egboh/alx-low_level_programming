#include "main.h"
#include <unistd.h>

/**
 * _putchar - print char
 * @c: char string
 * Return: write output
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
