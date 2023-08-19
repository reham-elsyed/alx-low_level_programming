#include <stdio.h>

/**
 * main - function print numbers from 1-100
 *
 * Return: 0 sucess
 */

int main(void)
{
int i;

for (i = 1; i < 100; i++)
{
if ((i % 3) == 0 && (i % 5) == 0)
{
(printf("FizzBuzz ");
}
if ((i % 3) == 0)
{
printf("Fizz ");
}
else if ((i % 5) == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
printf("\n");
}
return (0);
}
