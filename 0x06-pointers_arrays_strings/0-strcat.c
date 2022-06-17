#include "main.h"
#include <string.h>

/**
* _strcat- concatenate two string together
* @dest: destination string
* src: source to copy from
* Return: combine string containing the dest + src
*/

char *_strcat(char *dest, char *src){
int len = strlen(dest);
while(*src != '\0')
{
dest[len++] = *src++;
src++;
}
*dest = '\0';
return (dest);
}

