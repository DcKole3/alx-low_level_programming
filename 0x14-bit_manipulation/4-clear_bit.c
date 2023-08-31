#include "main.h"
#include "2-get_bit.c"
/**
 * set_bit -  sets value of bit to 0 at index
 * @n: pointer to integer to apply funct
 * @index: position of bit to set
 * Return: 1, or -1 (Error)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 32)
return (-1);
(*n) &= ~(1 << index);
if (get_bit((*n), index) == 0)
return (1);
return (-1);
}
