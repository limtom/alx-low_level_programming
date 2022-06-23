#include "main.h"

/**
 *factorial - factorial of a number
 *@n: interger parameter
 *Return: rerurn the factorial
 */

int factorial(int n)
{
if (n <= 1)
return (1);
if (n < 0)
return (-1);
else
return (n * factorial(n - 1));
}
