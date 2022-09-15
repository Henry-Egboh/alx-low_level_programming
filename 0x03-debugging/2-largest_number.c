#include "main.h"
/**
 * largest_number - Check the largest number
 * @a: first
 * @b: second
 * @c: third
 * Return: Largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
{
	largest = a;
}
	else if (b > a && b > c)
{
	largest = b;
}
	else if (c > a && c > b)
{
	largest = c;
}
	return (largest);
}
