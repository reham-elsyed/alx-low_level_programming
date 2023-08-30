#include "main.h"
/**
 * _strlen_recursion - function retrun strih len
 * @s: input string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
