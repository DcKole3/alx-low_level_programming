#include "main.h"
/**
 * sqrt_helper - checks for validity of assumed root
 * @i: assumed int of root
 * @n: square root int
 * Return: value of root
 */
int sqrt_helper(int i, int n)
{
int nb;
if (i * i != n)
{
if (i > n)
{
return (-1);
}
nb = sqrt_helper(i + 1, n);
return (nb + 1);
}
return (0);
}
/**
 * _sqrt_recursion - returns a natural square root
 * @n: integer to return to find square root
 * Return: returns square root or -1
 */
int _sqrt_recursion(int n)
{
int i = 0;
if (sqrt_helper(i, n) == n && n != 1)
return (-1);
return (sqrt_helper(i, n));
}
