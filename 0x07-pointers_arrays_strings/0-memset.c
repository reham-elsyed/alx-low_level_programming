#include "main.h"

/**
 * *_memset - a function that fill memory with constant
 * @s: input array value
 * @b: input value
 * @n: input value
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s)
}
