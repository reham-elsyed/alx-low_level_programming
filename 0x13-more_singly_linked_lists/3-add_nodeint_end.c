#include "lists.h"
/**
 * add_nodeint_end - function to add node to end
 * @head: pointer to node
 * @n: int
 * return: return newnode
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

		new = malloc(sizeof(listint_t));
				if (new == NULL)
				{
				return (NULL);
				}
				new->n = n;
				new->next = NULL;
				if (*head == NULL)
				{
					*head = new;
					return (new);
				}
				current = *head;
				while (current->next != NULL)
				{
					current = current->next;
				}
				current->next = new;
				return (new);
}
