#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
* struct token - Struct for tokens
* @t: The format to match
* @f: The function to call for the format
*/
typedef struct token
{
char *t;
void (*f)(char *separator, va_list ap);
} token_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
