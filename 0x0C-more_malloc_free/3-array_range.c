#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min value of integers
 * @max: max value of integers
 * Return: a value
 */

int *array_range(int min, int max)
{
	int *num;
	int x;

	if (min > max)
	return (NULL);
	num = malloc(sizeof(*num) * ((max - min) + 1));
	if (num == NULL)
	return (NULL);
	for (x = 0; min <= max; x++, min++)
	num[x] = min;
	return (num);
}
