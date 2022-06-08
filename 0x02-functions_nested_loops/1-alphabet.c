#include "main.h"
/**
 *main: entry point
 *Print alphabet: Print alphabet, in lowercase, using 'putchar'
 *Return : 0
 */
void print_alphabet(void)
{
char a = 'a';
while (a <= 'z')
{
putchar(a);
a++;
}
putchar(10);
}
