#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert node at given point
 * @head: pointer to pointer
 * @idx: input num
 * @n: number
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	unsigned int num = 0;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	if (!head || new_node == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node->next = *head;
	*head = new_node;
	return (new_node);
	}

	current = *head;
	while (current != NULL)
	{
		if (num == (idx - 1))
	{
		new_node->next = current->next;
		current->next = new_node;
		return (new_node);
	}
	current = current->next;
	num++;
}
	return (NULL);
}
