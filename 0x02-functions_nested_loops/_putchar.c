#include "main.h"
#include <unistd.h>
/**
 * _putchar - Define putchar output
 * @c: Character to print
 * Return: On Success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
