#include "3-calc.h"

/**
 * op_add - add function
 * @a: int a
 * @b: int b
 * Return: value
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub function
 * @a: int a
 * @b: int b
 * Return: value
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply function
 * @a: int a
 * @b: int b
 * Return: value
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div function
 * @a: int a
 * @b: int b
 * Return: value
 */

int op_div(int a, int b)
{
	if (b == 0)
{
	printf("Error\n");
	exit(100);
}
	return (a / b);
}

/**
 * op_mod - mod function
 * @a: int a
 * @b: int b
 * Return: value
 */

int op_mod(int a, int b)
{
	if (b == 0)
{
	printf("Error\n");
	exit(100);
}
	return (a % b);
}
