#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - function to print numbers
 * @separator: string input
 * @n: nimbers
 * @...: input nums
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list nums;
va_start(nums, n);

while (i < n)
{
printf("%d", va_arg(nums, int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
i++;
}
va_end(nums);
printf("\n");
}
