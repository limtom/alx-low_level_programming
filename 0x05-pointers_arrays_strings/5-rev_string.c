#include "main.h"
#include <string.h>

/**
* rev_string- reverse a string
* @s: a character parameter to reverse
* Return: the reverse string
*/
void rev_string(char *s)
{
char str[500];
int len, i;
strcpy(str, s);
len = strlen(str);
for (i = len-1; i >= 0; i--)
{
_putchar(str[i]);
}
}
