#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: start variable parameter
 */

void print_to_98(int n)
{
if (n < 98)
{
while (n < 98)
{
printf("%i, ", n++);
}
}
else
{
while (n > 98)
{
printf("%i, ", n--);
}
}
}
