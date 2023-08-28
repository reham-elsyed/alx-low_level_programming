#include "main.h"

/**
 **_strstr -function that compare two strings
 *@haystack: input string
 *@needle: input string
 *Return: beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] > '\0'; i++)
{
for (j = 0; needle[j] > '\0'; j++)
{
if (haystack[i] == needle[j] && haystack[i - 1] == ' ')
{
return (&(haystack[i]));
}
}
}
return ('\0');
}
