#include "main.h"
#include <string.h>
/**
* puts_half- print the second half of the string
* @str: char parameter
* Return: Success 0
*/

void puts_half(char *str)
{
int i, len;
len = strlen(str);
if (len % 2)
{
for (i = (len - 1) / 2; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
else
{
for (i = len / 2; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
}
