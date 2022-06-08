#include "main.h"
#include <stdio.h>
/**
 *Print_alphaber_x10:  prints 10 times the alphabet, in lowercase,
 *Return 0
 */
void print_alphabet_x10(void)
{
int i = 0;
char c;
while (i < 10)
{
c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar(10);
i++;
}
}
