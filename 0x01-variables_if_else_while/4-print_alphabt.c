#include <stdio.h>

/**
 * main - a function that print alphabet except q and e
 *
 * Return: 0(Success)
 */
int main(void)
{
int i;

for (i = 0; i < 26; i++)
{
char current_char = 'a' + i;
if (current_char != 'q' || current_char != 'e')
{
putchar(current_char);
}
}
putchar('\n');
return (0);
}
