#include "main.h"
/**
 * _isalpha - main function
 *
 * @c: character to check
 *
 * Return: 1 if true, 0 if false
 *
 */

int _isaplha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
