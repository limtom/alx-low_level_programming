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
char *res = dest;
while (*src != "\0" && n)
{
*dest++ = *src++;
n--;
}
while (n--)
*dest++ = '\0';
return (res);
}
