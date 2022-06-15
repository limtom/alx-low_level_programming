#include <stdio.h>
#include <string.h>

/**
* _strncat- concatenate two string considering n-bytes
* @dest: destination string
* @src: source string
* @n: spaces allocated
* Return: concatenated string
*/

char _strncat(char *dest, char *src, int n)
{
n = sizeof(dest) - (strlen(dest) - 1);
strncat(dest, src, n);
return (dest);
}