#include "main.h"

/**
* _strcat- concatenate two string together
* @dest: destination string
* @src: source to copy from
* Return: combine string 
*/

char *_strcat(char *dest, char *src)
{
char *res = dest;
while (*dest != '\0')
dest++;
while (*src != '\0')
*dest++ = *src++;
*dest = *src;
return (res);
}
