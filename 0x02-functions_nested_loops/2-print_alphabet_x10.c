#include "main.h"
/**
 *Print ten times:  prints 10 times the alphabet, in lowercase,
 *Return 0
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
print_alphabet();
putchar(10);   
i++;
}
}
