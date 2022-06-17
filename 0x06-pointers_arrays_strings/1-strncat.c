#include <stdio.h>

/**
* _strncat- concatenate two string considering n-bytes
* @dest: destination string
* @src: source string
* @n: spaces allocated
* Return: concatenated string
*/

char *_strncat(char *dest, char *src, int n){
int i = 0;
char *res = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0' && i < n){
*dest = *src++;
i++
}
*dest = '\0';
return res;
}