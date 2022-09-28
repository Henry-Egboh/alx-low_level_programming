#include "main.h"

/**
 * factorial - solve factorial
 * @n: integer
 * Return: return factorial of n
 */

int factorial(int n)
{
	if (n < 0)
{
	return (-1);
}	else if (n == 0 || n == 1)
{
	return (1);
}	else
{
	return (n * factorial(n - 1));
}
}
