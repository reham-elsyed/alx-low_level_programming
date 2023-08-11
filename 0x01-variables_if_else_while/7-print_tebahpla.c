#include <stdio.h>

/**
* main - print abc in reverse
*
* Retur: 0(Success)
*/

int main(void)
{
int i;

for (i = 0; i < 26; i++)
{
putchar('z' - i);
}

putchar('\n');
return (0);
}
