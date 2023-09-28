#include "main.h"
/**
 * flip_bits - gets no of flips
 * @n: number to get needed flips
 * @m: number to flip to
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int invert, count = 0;
invert = n ^ m;
while (invert > 0)
{
count += invert & 1;
invert >>= 1;
}
return (count);
}
