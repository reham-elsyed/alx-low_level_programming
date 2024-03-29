#include "lists.h"

/**
 *dlistint_len- function to return len of list
 *@h: input head
 *Return:num
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
