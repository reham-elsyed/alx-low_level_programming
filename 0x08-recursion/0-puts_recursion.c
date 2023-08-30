#include "main.h"
/**
 * _puts_recursion - function to print a string
 * @s: input value
 * Return: nothing
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
	_putchar('\n');
}
else if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
