#include <stdio.h>
#include <string.h>

/**
* _strncat- concatenate two string considering n-bytes
* @dest: destination string
* @src: source string
* @n: spaces allocated
* Return: concatenated string
*/

char *_strncat(char *dest, char *src, int n){
if(dest == NULL) return NULL;
int i = 0;
int len = strlen(dest);
while(i < n){
dest[len++] = src[i];
i++;
}
return (dest);
}