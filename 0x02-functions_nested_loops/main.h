#ifndef MAIN_H
#define MAIN_H
/**
 *_putchar - writes the character c to stdout
 * @c: parameter to write
 * Return: 1 or 0
 */
int _putchar(char c);
/**
 * print_alphabet - 
 * function that prints the alphabet
 */
void print_alphabet(void);
/**
 * print_alphabet_x10
 * prints 10 times the alphabet
 */
void print_alphabet_x10(void);
/**
 * _islower
 * checks for lowercase character
 */
int _islower(int c);
/**
 * _isalpha
 * checks for alphabetic character
 */
int _isalpha(int c);
/**
 * print_sign
 * prints the sign of a number
 */
int print_sign(int n);
/**
 * _abs
 * gets the absolute value of an int
 */
int _abs(int);
/**
 * print_last_digit
 * prints the last digit of a number
 */
int print_last_digit(int);
/**
 * jack_bauer
 * prints every minute of the day from 00:00 to 23:59.
 */
void jack_bauer(void);
/**
 * times_table
 * prints the 9 times table
 */
void times_table(void);
/**
 * add
 * adds two integers and returns the result
 */
int add(int, int);
/**
 * print_to_98
 * prints all natural numbers from n to 98
 */
void print_to_98(int n);

#endif
