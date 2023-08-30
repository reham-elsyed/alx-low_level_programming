#include "main.h"
/**
 * _print_rev_recursion - print string in reverse
 * @s: inputstring
 * Return: nothin
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
