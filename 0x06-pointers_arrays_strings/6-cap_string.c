#include "main.h"

/**
 * cap_string - function that capitalize first letter
 * @str: input string
 * Return: str.
 */
char *cap_string(char *str)
{
char del[] = " \t\n.;,!?\"(){}";
int i, j;
int is_delimiter = 0;

for (i = 0; str[i] != '\0'; i++)
{
if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
is_delimiter = 0;
for (j = 0; del[j] != '\0'; j++)
{
if (str[i] == del[j])
{
is_delimiter = 1;
break;
}
}
if (is_delimiter && str[i + 1] >= 'a' && str[i + 1] <= 'z')
{
str[i + 1] = str[i + 1] - 32;
}
}
return (str);
}
