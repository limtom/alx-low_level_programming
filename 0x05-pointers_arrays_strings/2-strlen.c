#include "main.h"
#include <stdio.h>
/**
* strlen- Print the length of a string
* @s: The character parmeter
* Return: An integer which is the length;
*/

int _strlen(char *s)
{
char str[100];
int len;
strcpy(str,s);
len = strlen(str);
return (len);
}
