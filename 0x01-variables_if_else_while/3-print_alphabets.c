# include <stdio.h>

/**
* main - a program that prints the alphabet in lowercase
*
* Return: 0 (Success)
*/

int main(void)
{
int i;
for (i = 0; i < 26; i++)
{
putchar('a' + i);
}
int j;
for (j = 0; j < 26; j++)
{
putchar('A' + j);
}

putchar('\n');
return (0);
}
