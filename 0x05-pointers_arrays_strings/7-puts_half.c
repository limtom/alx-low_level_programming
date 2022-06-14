#include "main.h"
#include <string.h>
/**
* puts_half- print the second half of the string
* @s: char parameter
* Return: Success 0
*/

void puts_half(char *str)
{
int i, len;
len = strlen(str);
for(i = len/2; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
} 
