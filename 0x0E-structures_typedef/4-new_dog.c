#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - fun to get lenght of str
 * @s: input string
 * Return: len inger
 */
int _strlen(const char *s)
{
if (s == NULL || *s == '\0')
return (0);
else
return (1 + _strlen(s + 1));
}
/**
 * _strcpy -function to copy sting
 *  * _strcpy - function that coppy string to another srting
 * @dest: buffer string
 * @src: string
 * Return: dest success
 */
char *_strcpy(char *dest, const char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}

/**
 * *new_dog - function to create new dog
 * @name: input name
 * @age: input int age
 * @owner: input name str
 * Return: struct pointer, null if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *pam;

if (!name || age < 0 || !owner)
return (NULL);
pam = malloc(sizeof(dog_t));
if (pam == NULL)
return (NULL);
pam->name = malloc(_strlen(name) + 1);
if (pam->name == NULL)
{
free(pam);
return (NULL);
}
pam->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (pam->owner == NULL)
{
free(pam->name);
free(pam);
return (NULL);
}
pam->name = _strcpy((*pam).name, name);
pam->age = age;
pam->owner = _strcpy((*pam).owner, owner);
return (pam);
}
