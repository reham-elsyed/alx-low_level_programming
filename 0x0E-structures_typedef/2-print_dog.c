#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function to print dog info
 * @d: struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
if (d->age == NULL)
printf("Age:(nil)\n");
else
printf("Age: %d\n", d->age);
else if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
