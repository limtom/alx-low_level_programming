#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _ strlen- Print the length of a string
* @s: The character parmeter
* Return: An integer which is the length;
*/

int _strlen(char *s)
{
char str[];
int len;
strcpy(str, s);
len = strlen(str);
return (len);
}
