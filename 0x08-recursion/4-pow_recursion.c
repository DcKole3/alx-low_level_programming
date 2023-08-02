#include "main.h"
/**
 * _pow_recursion
 * @x: value to exponent
 * @y: value of power
 * Return: returns exponent or -1 (error)
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y > 0)
{
return (x *_pow_recursion(x, y - 1));
}
return (1);
}
