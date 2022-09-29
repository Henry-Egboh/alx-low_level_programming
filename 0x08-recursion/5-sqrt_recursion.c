#include "main.h"

int sqrt_num(int num, int root);
int _sqrt_recursion(int n);

/**
 * sqrt_num - get the sqr root
 * @num: input number
 * @root: root of the number
 * Return: returns square root of natural number
 */

int sqrt_num(int num, int root)
{
	if (root * root == num)
{
	return (root);
}
	if (root == num / 2)
	return (-1);
	return (sqrt_num(num, root + 1));
}
/**
 * _sqrt_recursion - square root of a number
 * @n: root of a number
 * Return: return n natural number else -1
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
{
	return (-1);
}
	if (n == 1)
	return (1);
	return (sqrt_num(n, root));
}
