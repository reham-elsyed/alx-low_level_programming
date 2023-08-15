#include "main.h"

/**
 * main - prints alphabet in lower case with _putchar function
 *
 * Return: 0 sucess
 */
int main(void)
{
int i;
for (i = 0; i < 26; i++)
{
_putchar('a' + i);
}
_putchar('\n');
return (0);
}
