#include "main.h"
/**
 *main: entry point
 *Description: prints the alphabet, in lowercase, followed by a new line.
 *Return : 0
 */
void print_alphabet(void)
{
char a = 'a';
while (a <= 'z'){
putchar(a);
a++;
}
}
