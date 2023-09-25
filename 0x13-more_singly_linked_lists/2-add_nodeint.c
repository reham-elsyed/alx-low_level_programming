#include "lists.h"
/**
 * add_nodeint -function to add new node
 * @head: pointer to head pointer
 * @n: input int
 * Return: number
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
}
