#include "variadic_functions.h"
#include <stdio.h>

/**
* format_char - Format char
* @separator: Separator string
* @ap: Argument pointer
*/
void format_char(char *separator, va_list ap)
{
printf("%s%c", separator, va_arg(ap, int));
}

/**
* format_int - Format int
* @separator: Separator string
* @ap: Argument pointer
*/
void format_int(char *separator, va_list ap)
{
printf("%s%d", separator, va_arg(ap, int));
}

/**
* format_float - Format float
* @separator: Separator string
* @ap: Argument pointer
*/
void format_float(char *separator, va_list ap)
{
printf("%s%f", separator, va_arg(ap, double));
}

/**
* format_string - Format string
* @separator: Separator string
* @ap: Argument pointer
*/
void format_string(char *separator, va_list ap)
{
char *str = va_arg(ap, char *);

if (str == NULL)
printf("%s(nil)", separator);
else
printf("%s%s", separator, str);
}

/**
* print_all - Print all
* @format: The format string
*/
void print_all(const char * const format, ...)
{
int n = 0, m = 0;
char *separator = "";
va_list ap;
token_t tokens[] = {
{"c", format_char},
{"i", format_int},
{"f", format_float},
{"s", format_string},
{NULL, NULL}
};

va_start(ap, format);
while (format && format[n])
{
m = 0;
while (tokens[m].t)
{
if (format[n] == tokens[m].t[0])
{
tokens[m].f(separator, ap);
separator = ", ";
}
m++;
}
n++;
}
printf("\n");
va_end(ap);
}
