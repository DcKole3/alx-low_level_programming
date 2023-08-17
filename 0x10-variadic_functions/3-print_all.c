#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
va_list pr;
int i = 0;
char *arr;
arr = {'c', 'i', 'f', 's'};
char *string; 
va_start(pr, format);
 string = va_arg(pr, char *);
 while (arr == format)
   {
     printf(va_arg(pr, char));
     if (i > 0 && sep != NULL)
{
  printf(", ");
}

 if (string == NULL)
   {
     printf("(nil)");
   }
 i++;
   }
va_end(pr);
printf("\n");
}
