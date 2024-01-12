#include "lists.h"
/**
 * print_dlistint -function to print nodes
 *@h: address of head node
 *Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	if (!h)
		return (NULL);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
