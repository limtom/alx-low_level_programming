#include "main.h"
#include <string.h>

/**
* print_rev- Print a string in reverse
* @s: a character parameter to reverse
* Return: the reverse string
*/
void print_rev(char *s)
{
char str[500];
int len, i;
strcpy(str, s);
len = strlen(str);
for (i = len-1; i >= 0; i -- )
{
_putchar(str[i]);
}
_putchar('\n');
}
