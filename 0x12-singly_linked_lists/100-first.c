#include "lists.h"

void _printfirst(void) __attribute__ ((constructor));
/**
 * _printfirst - function to print line
 * Return: nothing
 */
void _printfirst(void)
{
printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
