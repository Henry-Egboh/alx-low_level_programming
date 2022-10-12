#include "dog.h"
#include <stdlib.h>

/**
 * new_dog- a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *adog;
	int i, j, k;

	adog = malloc(sizeof(*adog));
	if (adog == NULL || !(name) || !(owner))
{
	free(adog);
	return (NULL);
}
	for (j = 0; name[j]; j++)
	;
	for (k = 0; owner[k]; k++)
	;
	adog->name = malloc(j + 1);
	adog->owner = malloc(k + 1);
	if (!(adog->name) || !(adog->owner))
{
	free(adog->owner);
	free(adog->name);
	free(adog);
	return (NULL);
}
	for (i = 0; i < j; i++)
	adog->name[i] = name[i];
	adog->name[i] = '\0';
	adog->age = age;
	for (i = 0; i < k; i++)
	adog->owner[i] = owner[i];
	adog->owner[i] = '\0';
	return (adog);
}
