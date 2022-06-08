#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: char variable
 * Return: returns 1 and + if n > 1 and other wise
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
