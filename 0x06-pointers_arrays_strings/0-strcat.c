#include "main.h"
#include <string.h>

/**
* _strcat- concatenate two string together
* @dest: destination string
* src: source to copy from
* Return: combine string containing the dest + src
*/

char *_strcat(char *dest, char *src){
char *res = dest;
while (*dest != '\0')
{
dest++;
}
while(*src != '\0')
{
*dest++ = *src++;
src++;
}
*dest = *src;
return (res);
}

