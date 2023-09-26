#include "lists.h"
/**
 * sum_listint - function to return sum of data
 * @head: input pointer to list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	current = head;
	if (!head)
		return (0);
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
