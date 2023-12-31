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
	temp = *head;
	while (temp != NULL && num < (index - 1))
	{
		temp = temp->next;
			num++;
	}
	if (temp == NULL || temp->next == NULL)
		return (-1);
current = temp->next;
temp->next = current->next;
free(current);
return (1);
}
