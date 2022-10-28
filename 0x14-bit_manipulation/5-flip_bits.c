#include "main.h"

/**
 * flip_bits - count the number of bits
 * @n: number
 * @m: number to flip n to
 * Return: value
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
{
	bits += (xor & 1);
	xor >>= 1;
}
	return (bits);
}
