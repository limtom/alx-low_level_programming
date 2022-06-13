#include "main.h"
#include <string.h>

/**
* rev_string- reverse a string
* @s: a character parameter to reverse
* Return: the reverse string
*/
char rev_string(char *s)
{
char str[1000];
int len, i;
strcpy(str, s);
len = strlen(str);
for (i = len-1; i >= 0; i--)
{
return (str[i]);
}
}
