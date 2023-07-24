#include "main.h"
/**
 * swap_int - swaps two int values
 * @a: first pointer int
 * @b: second pointer int
 */
void swap_int(int *a, int *b)
{
int c = *b;
int d = *a;
*a = c;
*b = d;
}
