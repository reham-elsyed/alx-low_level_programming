#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **_strdup -function that copy the string to a location
 *@str: input string(pointer)
 *Return: newstr,Null if fail
 */
char *_strdup(char *str)
{
int i, size = 0;
char *newstr;

if (str == NULL)
return (NULL);
while (str[size] != '\0')
size++;
newstr = (char *) malloc(sizeof(char) * (size + 1));
if (newstr == NULL)
return (NULL);
for (i = 0; i < size; i++)
newstr[i] = str[i];
newstr[size] = '\0';
return (newstr);
}
