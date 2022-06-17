#include <stdio.h>

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
while (*src != "\0" && i < n)
{
*dest++ = *src++;
i++;
}
while (n > i)
{
*dest = "\0";
i++;
}
return (res);
}
