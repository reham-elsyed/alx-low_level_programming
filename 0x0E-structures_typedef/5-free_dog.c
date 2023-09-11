#include "main.h"
#include <stdlib.h>

/**
 * free_dog - function to free mem
 * @d: input struct dog
 * Return: nothing
 */
void free_dog(dog_t *d)
{
if (d)
{
if (d->name)
free(d->name);
if (d->owner)
free(d->owner);
free(d);
}
}