#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct print - print
 * @type: The operator
 * @f: The function associated
 */
typedef struct types
{
    char type;
    void (*function)( va_list);
} types_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
