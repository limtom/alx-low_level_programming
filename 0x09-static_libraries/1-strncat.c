#include <stdio.h>

/**
* _strncat- concatenate two string considering n-bytes
* @dest: destination string
* @src: source string
* @n: spaces allocated
* Return: concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
char *res = dest;
while (*dest != '\0')
dest++;
while (*src != '\0' && n--)
*dest++ = *src++;
*dest = '\0';
return (res);
}
