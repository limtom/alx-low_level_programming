#include <stdio.h>
#include <string.h>

/**
* _strncat- concatenate two string considering n-bytes
* @dest: destination string
* @src: source string
* @n: spaces allocated
* Return: concatenated string
*/

char *_strcat(char *dest, const char *src, int n){
int i = 0;
int len = strlen(dest);
char *res = dest;
while (*src != '\0' && i < n){
dest[len++] = *src;
src++;
}
dest[len++] = '\0';
return dest;
}