#include "main.h"
/**
 *get_bit - function to return value at certain index
 *@n: input number
 *@index: input index
 *Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
if (index > 63)
{
	return (-1);
}
bit = (n >> index) & 1;
return (bit);
}
