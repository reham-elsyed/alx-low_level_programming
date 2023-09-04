#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *s);
/**
 * *str_concat - function to concat strings to anew memeory
 * @s1: first input
 * @s2: second string
 * Return: newstring,NULL
 */
char *str_concat(char *s1, char *s2)
{
int len1, len2;
char *newstr;
int size;
int i, j;

len1 = _strlen(s1);
len2 = _strlen(s2);
size = len1 + len2;
newstr = (char *)malloc(sizeof(char) * (size + 1));
if (newstr == NULL)
return (NULL);
for (i = 0; i < len1; i++)
{
newstr[i] = s1[i];
}
for (j = 0; j < len2; j++)
{
newstr[len1 + j] = s2[j];
}
newstr[size] = '\0';
return (newstr);
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
