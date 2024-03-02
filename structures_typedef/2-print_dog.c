#include <stdio.h>
#include "dog.h"

/**
  * print_dog - prints information about the dog
  * @d: pointer to the dog structure to print
  *
  * Description: This function prints information about the dog
  * in the format: Name: [name], Age: [age], Owner: [owner]
  * If any element is NULL, replace it with
  * prints (nil).
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{

	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
