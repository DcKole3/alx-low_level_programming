#include <stdio.h>
/**
 * main  - code entry point
 *Description: prints the size of various types on the computer it is compiled and run on
 *return: Always 0 = Success, otherwise EOF = error
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("Size of a %s: %lu byte(s)\n", "char", (unsigned long)sizeof(a));
printf("Size of an %s: %lu byte(s)\n", "int", (unsigned long)sizeof(b));
printf("Size of a %s: %lu byte(s)\n", "long int", (unsigned long)sizeof(c));
printf("Size of a %s:%lu byte(s)\n", "long long int", (unsigned long)sizeof(d));
printf("Size of a %s: %lu byte(s)\n", "float", (unsigned long)sizeof(e));
return (0); /*Allows for result to stdout as mainn type is int*/
}
