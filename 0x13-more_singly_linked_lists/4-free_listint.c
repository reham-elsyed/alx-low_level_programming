#include "lists.h"
/**
 * free_listint - function to free alloc
 * @head: pointer to input
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	
	while (head)
	{
		current = head->next;
		free(head);
		head = temp;
	}
}
