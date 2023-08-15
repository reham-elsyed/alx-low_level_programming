#include "main.h"

/**
* print_alphabet_x10 - prints alphabet 10 times.
*
*/
void print_alphabet_x10(void)
{
int i, j;

for (i = 0; i < 11; i++)
{
for (j = 0; j < 26; j++)
{
_putchar('a' + j);
}
_putchar('\n');
}
}
