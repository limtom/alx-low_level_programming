#include "main.h"

/**
 * _strncpy- copy a string with number of string
 * @dest: the destination to copy string
 * @src: string to copy
 * @n: number of string to copy
 * Return: the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
  int i = 0;
char *res = dest;
 while (i <= n)
{
dest[i] = src[i];
n--;
}
while (n--)
dest[i] = '\0';
return (res);
}
