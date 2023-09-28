#include "main.h"
/**
 * get_bit - function to return bit value
 * @n: input num
 * @index: input index
 * Return: index value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

if (index > 63)
	return (-1);
val = (n >> index) & 1;
return (val);
}
