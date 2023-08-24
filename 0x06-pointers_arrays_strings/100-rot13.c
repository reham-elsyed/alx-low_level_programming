#include "main.h"

/**
 * rot13 - function to make cypher
 * @str: input value
 * Return: str value
 */
char *rot13(char *str)
{
int i, j;
char set1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char set2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (str[i] == set1[j])
{
str[i] = set2[j];
break;
}
}
}
return (str);
}



