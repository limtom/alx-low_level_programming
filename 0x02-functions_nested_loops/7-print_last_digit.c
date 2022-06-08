#include "main.h"
/**
 * print_last_digit - print the last digit of an integer
 * @n: an interger value as parameter
 * Return: return the last digit of the integer
 */

int print_last_digit(int n)
{
int last_digit;
if (n < 0)
n = -n;
last_digit = n % 10;
if (last_digit < 0)
last_digit = -last_digit;
_putchar(last_digit + '0');
return (last_digit);
}
