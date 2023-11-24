#include "main.h"
/**
 *clear_bit - function to set index value to 0in index
 *@n: input number
 *@index: input index
 *Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
return (-1);
}
*n = (~(1UL << index) & *n);
return (1);
}
