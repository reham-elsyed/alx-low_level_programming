#include "main.h"

/**
 * _strlen - function that return the length of a string
 * @s: input value
 * Return: length success
 */
int _strlen(char *s)
{
if (*s == '\0') return 0;
else return 1 + _strlen(s + 1);
}
