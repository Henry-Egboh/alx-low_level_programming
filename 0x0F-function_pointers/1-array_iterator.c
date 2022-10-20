#include "function_pointers.h"

/**
 * array_iterator - execute a function
 * @array: array elements
 * @size: size of array
 * @action: executable function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	for (i = 0; i < size; i++)
	action(array[i]);
}