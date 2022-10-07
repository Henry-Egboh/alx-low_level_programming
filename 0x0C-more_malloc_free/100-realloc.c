#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate a memory block
 * @ptr: pointer
 * @old_size: old size of int value
 * @new_size: new size of int value
 * Return: value
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *_ptr, *num;
	unsigned int i;

	if (new_size == old_size)
	return (ptr);
	if (ptr == NULL)
{
	mem = malloc(new_size);
	if (mem == NULL)
	return (mem);
}
	if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}
	_ptr = ptr;
	mem = malloc(sizeof(*_ptr) * new_size);
	if (mem == NULL)
{
	free(ptr);
	return (NULL);
}
	num = mem;
	for (i = 0; i < old_size && i < new_size; i++)
	num[i] = *_ptr++;
	free(ptr);
	return (mem);
}
