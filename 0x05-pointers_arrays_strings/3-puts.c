#include "main.h"
#include <string.h>
/**
* _puts- Print a string to the standard output
* @s: The character parameter to print
* Return: 0
*/

void _puts(char *s)
{
char str[500];
strcpy(str, s);
puts(str);
}
