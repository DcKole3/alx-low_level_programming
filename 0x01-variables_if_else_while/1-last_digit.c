#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point for program
 * Return:always 0 (success)
 */
int main(void)
{
int n;
int unitn;
srand(time(0));
n = rand() - RAND_MAX / 2;
unitn = n % 10;
if (unitn > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, unitn);
}
else if (unitn == 0)
{
printf("Last digit of %d is %d and is 0\n", n, unitn);
}
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, unitn);
return (0);
}
