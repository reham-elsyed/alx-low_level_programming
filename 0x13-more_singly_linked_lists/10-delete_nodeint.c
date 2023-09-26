#include "lists.h"
/**
 * delete_nodeint_at_index - function to delete node at given index
 * @head: input pointer to pointer
 * @index: input number
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int num = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
	current = *head;
	*head = (*head)->next;
	free(current);
	return (1);
	}
	while (current && (num < index - 1))
	{
		current = current->next;
			num++;
	}
	if (current == NULL || current->next == NULL)
		return (-1);

*temp = current->next;
current->next = temp->next;
free(temp);
return (1);
}
