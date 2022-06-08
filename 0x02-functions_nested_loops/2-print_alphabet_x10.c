#include "main.h"
#include <stdio.h>
/**
 *Print ten times:  prints 10 times the alphabet, in lowercase,
 *Return 0
 */
void print_alphabet_x10(void)
{
int i = 0;
char c;
while (i < 10)
{
char a = 'a';
while (a <= 'z')
{
putchar(a);
a++;
}
putchar(10);
i++;
}
