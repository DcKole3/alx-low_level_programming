#include "main.h"
/**
 * prime_helper - helps compare int is even or not
 * @i: int before first prime number
 * @n: integer to check
 * Return: 1 (prime num) or 0 (otherwise)
 */
int prime_helper(int i, int n)
{
if (n % i == 0 && n != i)
return (0);
if (n % i != 0 && i < n)
return (prime_helper(i + 1, n));
return (1);
}
/**
 * is_prime_number - checksif int is a prime
 * @n: integer to check
 * Return: boolean
 */
int is_prime_number(int n)
{
int i = 2;
if (n < 2)
return (0);
return (prime_helper(i, n));
}
