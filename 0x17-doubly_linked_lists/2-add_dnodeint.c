#include "lists.h"

/**
 *add_dnodeint - function to add node
 *@head: pointer input of head node
 *@n input of n adta
 *Return: add of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!head || !new)
		return (new ? free(new), NULL : NULL);

	newNode->n = n;
	newNode->prev = NULL;
	if (!*head)
	{
		*head = newNode;
		newNode->next = NULL;
	}
	else
	{
		newNode->next = *head;
		(*head)->prev = newNode;
		*head = newNode;
	}
	return (newNode);
}
