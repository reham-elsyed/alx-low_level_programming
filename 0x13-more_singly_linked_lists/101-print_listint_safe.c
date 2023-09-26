#include "lists.h"
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count = 0;
	size_t i;
	const listint_t *printed_nodes[1024];

	if (!head)
	{
	exit(98);
	}
	current = head;

	while (current != NULL)
	{
		for (i = 0; i < count; i++)
		{
		 if (printed_nodes[i] == current)
		 {
			 printf("[%p] %d\n", (void *)current, current->n);
			  return (count);
		 }
		}
		printed_nodes[count++] = current;
		printf("[%p] ", (void *)current);
		printf("%d\n", current->n);
		current = current->next;
	}
	return (count);
}
