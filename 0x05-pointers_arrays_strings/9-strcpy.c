#include "main.h"

/**
 * _strcpy - function that coppy string to another srting
 * @dest: buffer string
 * @src: string
 * Return: 0 success
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
