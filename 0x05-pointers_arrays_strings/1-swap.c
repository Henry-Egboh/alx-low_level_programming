#include "main.h"
/**
 * swap_int - swap two integers
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int dev = *a;
	*a = *b;
	*b = dev;
}
