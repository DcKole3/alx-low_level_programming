#include "main.h"
#include "2-get_bit.c"
/**
 * clear_bit - sets a bit value to 0
 * @n: integer to set value at index
 * @index: index of bit to set to 0
 * Return: 1 (success), or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 32)
return (-1);
(*n) &= ~(1 << index);
if (get_bit((*n), index) == 0)
{
return (1);
}
return (-1);
}
