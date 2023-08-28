#include "main.h"

/**
 * _strspn - function that gets the length of prefix
 * @s: input string
 * @accept: input to match to
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
int n = 0;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
n++;
break;
}
}
if (accept[j] == '\0')
{
return (n);
}
}
return (n);
}
