#include "search_algos.h"
#include <math.h>
/**
 *jump_search - function to jump search in sorted array
 *@array: inptut array pointer
 *@size: of array
 *@value: value of array
 *Return: -1 if fail value index if found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t i;
	size_t jump = sqrt(size);

	for (i = 0; i < size; i += jump)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] < value)
			low = i;
		else
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", low, low + jump);
	for (i = low; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
