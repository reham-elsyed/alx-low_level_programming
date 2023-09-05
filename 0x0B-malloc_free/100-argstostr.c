#include "main.h"
#include <stdlib>

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
 * *argstostr - function to concat arg
 * @ac: firset input
 * @av: second input
 * Return: sum,NULL if fail
 */
char *argstostr(int ac, char **av)
{
int i, j, len = 0, result = 0;
char *s;

if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac, i++, nc++)
len += _strlen(av[i]);
s = malloc(sizeof(char) * len + 1);
if (s == 0)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, result++)
s[result] = av[i][j];
s[result] = '\n';
result++;
}
s[result] = '\0';
return (s);
}
