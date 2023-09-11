#include "main.h"
#include "dog.h"

/**
 * init_dog - function to intialize var of type dog
 * @d: struct input
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
