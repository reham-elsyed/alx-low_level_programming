#include "lists.h"
/**
* get_nodeint_at_index -function to return nth of the node
* @head: input pointer tolist
* @index: input index
* Return: number of index, null if null
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current;
unsigned int num = 0;

current = head;
while (current != NULL)
{
if (num == index)
return (current);
current = current->next;
num++;
}
return (NULL);
}
