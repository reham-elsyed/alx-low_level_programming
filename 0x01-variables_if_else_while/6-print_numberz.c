#include <stdio.h>

/**
* main - A function that print numbers
*
* Return: 0(Success)
*/

int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar('0' + i);
}

putchar('\n');
return (0);
}
