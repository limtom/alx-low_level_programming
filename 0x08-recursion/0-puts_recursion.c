#include <stdio.h>
#include "main.h"

/**
 * puts_recursion- A function that print a string
 *@s: string
 */

void puts_recursion(char *s)
{
if (*s == '\0')
_putchar('\n');
else
{
_putchar(*s);
puts_recursion(s + 1);
}
}
