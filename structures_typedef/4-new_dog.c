#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: age of the dog
 * @owner: dog owner
 *
 * Return: pointer to new dog structure (dog_t)
 * or NULL if memory allocation failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    size_t name_len, owner_len;

    if (name == NULL || owner == NULL)
        return (NULL);

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    name_len = strlen(name);
    new_dog->name = malloc(name_len + 1);
    if (new_dog->name == NULL)
    {
        free(new_dog);
        return (NULL);
    }
    memcpy(new_dog->name, name, name_len + 1);

    owner_len = strlen(owner);
    new_dog->owner = malloc(owner_len + 1);
    if (new_dog->owner == NULL)
    {
        free(new_dog->name);
        free(new_dog);
        return (NULL);
    }
    memcpy(new_dog->owner, owner, owner_len + 1);

    new_dog->age = age;

    return (new_dog);
}
