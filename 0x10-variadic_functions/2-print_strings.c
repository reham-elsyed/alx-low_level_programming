#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function to printstrting
 * @separator: input string
 * @n: input int
 * @...: string input
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	const char *strng;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		strng = va_arg(str, const char *);
		if (strng == NULL)
		{
			printf("(nil)");
		}
		else
		{
	printf("%s", strng);
	}
	if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	va_end(str);
	printf("\n");
}
