#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function to create array
 * @size: size of arr
 * @c: input value har
 * Return: str,NULL IF fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
