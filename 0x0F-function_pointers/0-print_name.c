#include "function_pointers.h"
/**
 * print_name - prints name using callback func.
 * @name: name to print
 * @f: callback funtion for print format
 */
void print_name(char *name, void (*f)(char *))
{
f(name); 
}
