#include "main.h"
/**
 *reverse_array - function that reverse the content
 *@a: content array of intgers
 *@n: number of element
 *Return: nothing
 */
void reverse_array(int *a,int n)
{
int i;
for (i = (n - 1); i >= 0; i--)
{
_putchar(a[i]);
}
_putchar('\n');
}
