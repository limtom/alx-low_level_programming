#include "main.h"
/**
 * print_square - print a sqauare
 *
 * @size: Dimension of swuare.
 * Return: Always 0.
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{  
int i = 0;
int j;
while (i < size)
{
j = 0;
while (j < size)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
}
}
