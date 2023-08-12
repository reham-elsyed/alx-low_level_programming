#include <stdio.h>

/**
 * main - program to print three digit number
 *
 * Return: 0(Success)
 */
int main(void)
{
int i;
int j;
int g;

for (i = 0; i < 8; i++)
{
for (j = i + 1; j < 9; j++)
{
for (g = i + 2; g < 10; g++)
{
putchar('0' + i);
putchar('0' + j);
putchar('0' + g);
if (i != 7 || j != 8 || g != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
