#include "main.h"
/**
 * get_bit - gets value of a bit at index
 * @n: number to get bit at index
 * @index: index of bit to get
 * Return: value of bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 32)
{
return (-1);
}
return (n >> index & 1);
}
