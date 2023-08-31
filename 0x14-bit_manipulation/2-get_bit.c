#include "main.h"
/**
 * get_bit - gets the bit at index of n
 * @n: number to get index bit value
 * @index: required bit value position in n (binary)
 * Return: value of the bit at index, or -1 (Error)
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 32)
{
return (-1);
}
return (n >> index & 1);
}
