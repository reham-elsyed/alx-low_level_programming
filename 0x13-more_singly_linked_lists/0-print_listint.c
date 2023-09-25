#include "lists.h"

/**
 *print_listint - function to print list
 *@h: inpit pointer to list
 *Return: list
 */

size_t print_listint(const listint_t *h)
{
	size_t s = 0;
	if (!h)
	return (0);
	while (h)
	{
		printf("%d", h->n);
		s++;
		h = h->next;
	}
	return (s);
}
