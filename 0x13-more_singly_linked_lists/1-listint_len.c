#include "liats.h"

/**
 * listint_len - function return number of elements in list
 * @h: pointer to input list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t s = 0;
	while (h)
	{
		s++;
		h = h ->next;
	}
	return (s);
}
