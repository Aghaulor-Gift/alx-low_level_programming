#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - Frees memory allocated for a dog.
 * @d: Pointer to the dog to be freed.
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);

	free(d);
	}
}
