#include "search_algos.h"

/**
 *linear_search -function to apply linear search
 *@array: input pointer to array
 *@size: size of the array
 *@value: value of the integer
 *Return: -1 if failure index of integer if found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);

}
