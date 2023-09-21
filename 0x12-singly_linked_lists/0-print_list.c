#include "lists.h"
#include <stdlib.h>
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
/**
 * print_list - print list
 * @h: pointer
 *Return: size
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{ printf("[%d] %s\n", _strlen(h->str), h->str ? h ->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}

