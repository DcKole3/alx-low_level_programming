#include "main.h"
#include "2-get_bit.c"
/**
 * flip_bits - gets no of bits needed to flip
 * one number to another 
 * @n: int 1 to compare
 * @m: int 1 to compare
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int i = 0;
unsigned long int xor;
xor = n ^ m;
while (xor > 0)
{
i += xor & 1;
xor >>= 1;
}
return (i);
}
