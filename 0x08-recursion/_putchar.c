#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints output
 * @c: character
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
