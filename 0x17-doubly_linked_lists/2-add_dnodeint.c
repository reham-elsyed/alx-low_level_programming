#include "lists.h"

/**
 *add_dnodeint - function to add node
 *@head: pointer input of head node
 *@n input of n adta
 *Return: add of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->n = n;
	newNode->prev = (*head)->prev;
	newNode->next = *head;

	if ((*head) != NULL)
		(*head)->prev = newNode;
	*head = newNode
	return (newNode);
}
