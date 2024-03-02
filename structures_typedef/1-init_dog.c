#include "dog.h"
#include<stdlib.h>
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the dog structure to initialize
 * @name: dog name
 * @age: age of the dog
 * @owner: dog owner
 *
 * Description: This function initializes a variable of type struct dog
 * with specified values for each of its elements.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
