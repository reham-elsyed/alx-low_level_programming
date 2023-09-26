#include "lists.h"
/**
 * reverse_listint - function to reverse list
 * @head: input pointer to pointer
 * Return: list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev;

	if ((*head)->next == NULL || *head == NULL)
	{
		return (*head);
	}
	rev = reverse_listint(&((*head)->next));
	(*head)->next->next = *head;
	(*head)->next = NULL;
	return (rev);
}
