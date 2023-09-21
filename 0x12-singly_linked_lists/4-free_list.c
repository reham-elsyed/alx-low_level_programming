#include "lists.h"
/**
 * free_list - gunction to free list
 * @head: input head of node
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *node, *next_node;

	if (!head)
	return;

	node = head;
	while (node)
	{
		next_node = node->next;
		free(node->str);
		free(node);
		node = next_node;
	}
}
