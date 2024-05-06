#include "search_algos.h"
/**
 *print_array -function to print array
 *@array: pointer to input array
 *@low: input of start of print
 *@high: input to end of print
 *Return: void
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
}
/**
 *binary_search -function to binary search sorted array
 *@array: input pointer to array
 *@size: size of the array
 *@value: the value you are looking for
 *
 *Return: index of value in array -1 if fail
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high)
	{
		print_array(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
