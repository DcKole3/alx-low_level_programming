#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int print_c(va_list pr);
int print_i(va_list pr);
int print_f(va_list pr);
int print_s(va_list pr);
/**
 * struct op - struct for array
 * @c: character to compare to
 * @f: corelating function
 */
typedef struct op
{
	char *c;
	int (*f)(va_list pr);
} pr_all;
#endif /*VARIADIC_FUNCTIONS_H*/
