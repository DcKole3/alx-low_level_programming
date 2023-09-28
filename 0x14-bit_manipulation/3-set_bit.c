#include "main.h"
#include "2-get_bit.c"
/**
 * set_bit - sets a bit value to 1
 * @n: integer to set value to 1
 * @index: index of bit to set
 * Return: 1 (success), or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 32)
return (-1);
(*n) |= 1 << index;
if (get_bit((*n), index) == 1)
{
return (1);
}
return (-1);
}
