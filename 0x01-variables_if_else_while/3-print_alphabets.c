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
for (i = 0; i < 26; i++)
{
putchar('A' + i);
}

putchar('\n');
return (0);
}
