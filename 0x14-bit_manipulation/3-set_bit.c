#include "main.h"
/**
 *set_bit - function to return value at certain index
 *@n: input number
 *@index: input index
 *Retun: 1
 */
int set_bit(unsigned long int n, unsigned int index)
{
        int bit;
if (index > 63)
{
        return (-1);
}
*n = ((1UL << index) | *n);
   return (1);
}
