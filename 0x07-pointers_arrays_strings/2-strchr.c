#include "main.h"
/**
 * *_strchr - function that return a letter
 * @s: string of characters
 * @c: input letter
 * Return: s if found, null id not found
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; i >= '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
return ('\0');
}
