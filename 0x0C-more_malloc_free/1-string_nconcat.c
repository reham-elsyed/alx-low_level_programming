#include "main.h"
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
 * *string_nconcat - fun cincat. twostrings
 * @s1: first string
 * @s2: sec. string
 * @n: input num.
 * Return: strc
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i, j;
unsigned int lens1, lens2;

if (s1 == NULL)
	s1 = " ";
if (s2 == NULL)
	s2 = " ";
lens1 = _strlen(s1);
lens2 = _strlen(s2);
if (n < lens2)
s = malloc(sizeof(char) * (lens1 + n + 1));
else
s = malloc(sizeof(char) * (lens1 + lens2 + 1));
if (!s)
return (NULL);
for (i = 0; i < lens1; i++)
{
s[i] = s1[i];
}
for (j = 0; j <n && s2[j] != '\0'; j++)
{
s[lens1 + j] = s2[j];
}
s[lens1 + j] = '\0';
return (s);
}
