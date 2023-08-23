#include "main.h"
/**
* _strcmp -function that compares two strings.
* @s1: input one
* @s2: input two
* Return: s1[i] - s2[i]
*/
int _strcmp(char *s1, char *s2)
{
int i = 0, res = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
res = s1[i] - s2[i];
break;
}
i++;
}
return (res);
}
