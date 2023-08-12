#include <stdio.h>

/**
*main - program that print every possible combination of single digit
*
*Return: 0(Success)
*/
int main(void)
{
int i;
int j;

for (i = 0; i < 10; i++)
{
for (j = i; j < 10; j++)
{
putchar('0' + i);
putchar('0' + j);
putchar(',');
putchar(' ');
}
}
return (0);
}
