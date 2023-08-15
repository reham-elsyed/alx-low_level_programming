#include "main.h"

/**
* print_alphabet - prints alphabet in lower case with _putchar function
*/
void print_alphabet(void)
{
int i;
for (i = 0; i < 26; i++)
{
_putchar('a' + i);
}
_putchar('\n');
}
