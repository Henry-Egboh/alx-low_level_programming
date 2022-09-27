#include "main.h"
#include <unistd.h>
/**
 * _putchar - write sth
 * @c: string
 * Return: return write
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
