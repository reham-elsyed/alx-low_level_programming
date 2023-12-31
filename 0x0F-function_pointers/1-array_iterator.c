#include "function_pointers.h"

/**
 * array_iterator - function to iterate over array
 * @array: array input
 * @size: size of array
 * @action:input function
 *Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array && size && action)
{
for (i = 0; i < size; i++)
{
action(*array++);
}
}
}
