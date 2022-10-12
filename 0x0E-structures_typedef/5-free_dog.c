#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - dogs you are free now!
 * @d: dog type
 */

void free_dog(dog_t *d)
{
	if (d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
}
