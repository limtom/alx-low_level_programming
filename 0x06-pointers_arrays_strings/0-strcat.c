#include <main.h>
#include <string.h>

/**
* _strcat- concatenate two string together
* @dest: destination string
* src: source to copy from
* Return: combine string containing the dest + src
*/

char *_strcat(char *dest, char *src){
    if(dest == NULL) return NULL;
        int i = 0;
            /*get the length of dest of te dest*/
                int len = strlen(dest);
                    while(src[i] != '\0'){
                            dest[len++] = src[i];
                                    i++;
                                            if(src[i] == '\0')
                                                    dest[len++] = '\0';
                                                        }
                                                            return (dest);
                                                            }
