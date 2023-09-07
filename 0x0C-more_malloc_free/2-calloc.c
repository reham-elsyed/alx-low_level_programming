#include "main.h"
#include <stdlib.h>
/**
 * *_memset - fills mrem with const byte
 * @s: pointer input const
 * @b: input const
 * @n: max bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
/**
 * _calloc - function to alloc memory
 * @nmemb: input string
 * @size: input number
 * Return: mem ,NULL if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *mem;
if (size == 0 || nmemb == 0)
	return (NULL);
mem = malloc(sizeof(int) * nmemb);
if (mem == 0)
	return (NULL);
_memset(mem, 0, sizeof(int) * nmemb);
return (mem);
}
