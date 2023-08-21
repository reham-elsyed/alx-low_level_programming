#include "main.h"
/**
* print_rev - function that print dtring in reverse
* @s: input pointer
* Return: nothing
*/
void print_rev(char *s)
{
int len, i;
char temp;

for (len = 0; s[len] != '\0'; ++len)
;
for (i = 0; i < (len / 2); i++)
{
temp = s[i];
s[i] = s[len - 1 - i];
s[len - 1 - i] = temp;
}
}
