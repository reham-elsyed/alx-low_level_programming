#include <stdio>

/**
 * main - program to print compination
 *  of two digits and each two numbers are separated by comma
 *
 *  Return: 0(Sucess)
 */
int main(void)
{
int i;
int j;
int g;
int n;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
for (g = 0; g < 10; g++)
{
for (n = g + 1; g < 10; n++)
{
putchar('0' + i);
putchar('0' + j);
putchar(' ');
putchar('0' + g);
putchar('0' + n);
if (i != 9 || j != 8 || g != 9 || n != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
