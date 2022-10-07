#include "main.h"
#include <stdlib.h>

/**
 * _calloc -allocate mem to array
 * @nmemb: int values
 * @size: array size
 * Return: num value
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *strl;
	void *num;

	if (nmemb == 0 || size == 0)
	return (NULL);
	num = malloc(size * nmemb);
	if (num == NULL)
	return (NULL);
	strl = num;
	for (i = 0; i < (size * nmemb); i++)
	strl[i] = '\0';
	return (num);
}
