#include "main.h"
/**
* print_rev - function that print dtring in reverse
* @s: input pointer
* Return: nothing
*/
void print_rev(char *s)
{
int len = 0, i;
char temp;

for (i = 0; s[i] != '\0'; i++)
{
len++;
}
for(i = 0; i < s[len / 2]; i++)
{
temp = s[i];
s[i] = s[len - 1 - i];
s[len - 1 - i] = temp;
}
}
