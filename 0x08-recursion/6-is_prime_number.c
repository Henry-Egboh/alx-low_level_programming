#include "main.h"

/**
 * prime_number - detect prime number
 * @num: number
 * @n: divisor
 * Return: Always 1
 */

int prime_number(unsigned int num, unsigned int n)
{
	if (num % n == 0)
{
	if (num == n)
{
	return (1);
}	else
	return (0);
}
	return (0 + prime_number(num, n + 1));
}

/**
 * is_prime_number - check input
 * @n: input number
 * Return: return 1
 */

int is_prime_number(int n)
{
	if (n < 0)
	return (0);
	if (n == 0)
	return (0);
	if (n == 1)
	return (0);
	else
	return (prime_number(n, 2));
}
