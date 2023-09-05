#include <stdlib.h>
#include "main.h"

/**
 * w_counter - function to count the num of words
 * @s: string input
 *
 * Return: num of words
 */
int  w_counter(char *s)
{
int flg, i, k = 0;
flg = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == ' ')
flg = 0;
else if (flg == 0)
{
flg = 1;
k++;
}
}

return (k);
}
/**
 * **strtow - splits string to words
 * @str: string split
 * Return: pointer to an array of strings (Success
 */
char **strtow(char *str)
{
char **result, *tmp;
int i, k = 0, len = 0, word, m = 0, strt, end;
while (*(str + len))
len++;
word =  w_counter(str);
if (word == 0)
return (NULL);
result = (char **) malloc(sizeof(char *) * (word + 1));
if (result == NULL)
return (NULL);
for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (m)
{
end = i;
tmp = (char *) malloc(sizeof(char) * (m + 1));
if (tmp == NULL)
return (NULL);
while (strt < end)
*tmp++ = str[strt++];
*tmp = '\0';
result[k] = tmp - m;
k++;
m = 0;
}
}
else if (m++ == 0)
strt = i;
}
result[k] = NULL;

return (result);
}
