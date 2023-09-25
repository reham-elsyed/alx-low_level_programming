#include "lists.h"
/**
 * free_listint2 -function to free memory
 * @head: input pointer
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (*head == NULL)
		return;
	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	*head = NULL;
}
