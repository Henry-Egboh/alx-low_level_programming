#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: dog that store values
 */
typedef struct dog dog_t;
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
