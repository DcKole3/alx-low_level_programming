#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>
/**
 * print_name
 * prints a name using call back func.
 */
void print_name(char *name, void (*f)(char *));
/**
 * array_iterator
 * executes function given on each element of an array
 */
void array_iterator(int *array, size_t size, void (*action)(int));
/**
 * int_index
 * searches for an integer in an array
 */
int int_index(int *array, int size, int (*cmp)(int));
#endif /*FUNCTION_POINTERS_H*/
