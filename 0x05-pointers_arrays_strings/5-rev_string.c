#include "main.h"
#include <string.h>

/**
* rev_string- reverse a string
* @s: a character parameter to reverse
* Return: the reverse string
*/
void rev_string(char *s)
{
int len, i, temp;
len = strlen(s);
for (i = 0; i < len/2; i++)
{
temp = s[i];
s[i] = s[len-i-1];
s[len-i-1] = temp;
}
}
