#include "main.h"

/**
 * *_strpbrk - search a string for any of a setof bytes
 * @s: input value
 * @accept: compare string
 * Return: accept value
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; i != '\0'; i++)
{
for (j = 0; j != '\0'; j++)
{
if (s[i] == accept[j])
{
return ((&s[i]));
}
}
}
return ('\0');
}
