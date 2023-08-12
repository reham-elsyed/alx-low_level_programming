#include <stdio.h>

/**
* main - a function that print alphabet except q and e
*
* Return: 0(Success)
*/

int main(void)
{
int i;

for (i = 0; i < 16; i++)
{
char current_char;

if (i < 10)
{
current_char = '0' + i;
}
else
{
current_char = 'a' + i - 10;
}
putchar(current_char);
}
putchar('\n');
return (0);
}
