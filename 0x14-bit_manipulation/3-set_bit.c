#include "main.h"
/**
 * set_bit - function to set bit to a val
 * @n: input pointer to x
 * @index: input of index
 * Return:1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
