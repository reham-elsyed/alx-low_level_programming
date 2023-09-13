#include "function_pointers.h"
/**
 * int_index - function search for an int
 * @array: input array
 * @size: input sizr
 * @cmp:function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && size && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
}
return (-1);
}
