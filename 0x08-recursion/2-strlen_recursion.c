#include "main.h"

/**
 *_strlen_recursion - length of str  with recursion
 *@s: string
 *Return: number of string
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
{
return (1 + _strlen_recursion(s + 1));
}
}
