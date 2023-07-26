#ifndef MAIN_H
#define MAIN_H
/**
 *_putchar - writes the character c to stdout
 * @c: parameter to write
 * Return: 1 or 0
 */
int _putchar(char c);
/**
 * _isupper - 
 * function that checks for uppercase chr
 */
int _isupper(int c);
/**
 * _isdigit
 * checks for a digit (0 through 9)
 */
int _isdigit(int c);
/**
 * mul
 * multiplies two integers
 */
int mul(int a, int b);
/**
 * print_numbers
 * prints 0 to 9 and new line.
 */
void print_numbers(void);
/**
 * print_most_numbers
 * prints 0 - 9 (minus 2 & 4) & new line.
 */
void print_most_numbers(void);
/**
 * more_numbers
 * prints 10 times 0 - 14 & new line.
 */
void more_numbers(void);
/**
 * print_line
 * draws a straight line in the terminal.
 */
void print_line(int n);
/**
 * print_diagonal
 * draws a diagonal line on the terminal.
 */
void print_diagonal(int n);
/**
 * print_square
 * prints a square then a new line
 */
void print_square(int size);
/**
 * print_triangle
 * prints a triangle,then a new line
 */
void print_triangle(int size);
/**
 * print_number
 * prints an integer using _putchar.
 */
void print_number(int n);
/**
 * reset_to_98
 * takes a pointer to an int as parameter
 * and updates the value it points to to 98
 */
void reset_to_98(int *n);
/**
 * swap_int
 * swaps the values of two integers.
 */
void swap_int(int *a, int *b);
/**  
 * _strlen
 * returns the length of a string.
 */
int _strlen(char *s);
/**  
 * _puts
 * prints a string then a new line, to stdout
 */
void _puts(char *str);
/**  
 * print_rev
 * prints a string, in reverse then a new line
 */
void print_rev(char *s);
/**  
 * rev_string
 * reverses a string.
 */
void rev_string(char *s);
/**  
 * puts2
 * prints every other char of a string, starting with 
 * the first character then a new line
 */
void puts2(char *str);
/**  
 * puts_half
 * print the second half of the string
 */
void puts_half(char *str);
/**  
 * print_array
 *  prints n elements of an array of integers then a new line.
 */
void print_array(int *a, int n);
/**
 * *_strcpy
 * copies the string pointed; to the buffer
 */
char *_strcpy(char *dest, char *src);
/**
 * *_strcat 
 * appends the src string to the dest string
 */
char *_strcat(char *dest, char *src);
/**
 * *_strncat
 * concatenates n elements of src to dest strings.
 */
char *_strncat(char *dest, char *src, int n);
/**
 * *_strncpy
 * copies n elements of src to dest string.
 */
char *_strncpy(char *dest, char *src, int n);
/**
 * _strcmp
 * compares two strings.
 */
int _strcmp(char *s1, char *s2);
/**
 * reverse_array
 * reverses the content of an array of integers.
 */
void reverse_array(int *a, int n);
/**
 * *string_toupper 
 * changes all lowercase letters of a string to uppercase.
 */
char *string_toupper(char *);
/**
 * *cap_string
 * capitalizes all words of a string.
 */
char *cap_string(char *);
/**
 * *leet
 * encodes a string into 1337.
 */
char *leet(char *);

#endif
