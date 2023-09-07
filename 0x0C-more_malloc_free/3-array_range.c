#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function to create array of int
 * @min: min num input
 * @max: max num input
 * Return: num, NULLif fail
 */
int *array_range(int min, int max)
{
	int len, i;
	int *p;

	if (min > max)
		return (NULL);
	len = (max - min) + 1;
	p = malloc(sizeof(int) * len);
	if (!p)
		return (NULL);
	for (i = 0; i < len ; i++)
		p[i] = min++;
	return (p);
}
