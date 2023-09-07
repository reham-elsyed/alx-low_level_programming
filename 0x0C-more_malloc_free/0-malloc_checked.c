#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to alloc memory
 * @b: input intger
 * Return: pointer ptr
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == 0)
		exit(98);
	return (ptr);
}
