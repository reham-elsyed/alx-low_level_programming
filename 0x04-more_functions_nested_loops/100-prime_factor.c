#include <stdio.h>

/**
 * main - print prime number
 *
 * Return: 0
 */
int main(void)
{
long int i, num, j;

num = 612852475143;
for (i = 1; i <= num; i++)
{
if ((num % i) == 0)
{
if (num == i)
{printf("%ld\n", i);
break;
}
j = num / i;
num = j;
}
}
return (0);
}
