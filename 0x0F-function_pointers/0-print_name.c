#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - pointer function to print name
 * @name: pointer to name
 * @f: pointer to function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
