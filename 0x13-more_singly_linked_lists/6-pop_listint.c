#include "lists.h"
/**
 * pop_listint - function to delete first node
 * @head: input pointer to pointer
 * Return: 0;
 */
int pop_listint(listint_t **head)
{
	listint_t current;

	if (!head || !*head)
		return (0);
	if (*head)
	{
		num = (*head)->n;
		current = (*head)->next;
		free(*head);
	*head = current;
	}
	return (num);
}	
