#include "main.h"

/**
 * clear_bit - set value to 0
 * @n: pointer to the bit
 * @index: index
 * Return: value
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);
	*n &= ~(1 << index);
	return (1);
}
