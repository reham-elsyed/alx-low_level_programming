#include "lists.h"

/**
 * add_node - function to add node to list
 * @head: input head
 * @str: string input
 * Return: address
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *new_head = malloc(sizeof(list_t));

	if (!head || !new_head)
		return (NULL);
	if (str)
	{
		new_head->str = strdup(str);
		if (!new_head->str)
		{
			free(new_head);
		return (NULL);
	}
	new_head->len = _strlen(new_head->str);
}
new_head->next = *head;
*head = new_head;
	return (new_head);
}

/**
 * _strlen - function that return the length of a string
 * @s: input value
 * Return: length success
 */
int _strlen(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen(s + 1));
}
