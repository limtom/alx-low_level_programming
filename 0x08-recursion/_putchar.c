#include <unistd.h>

/**
 * _putchar - print a character to stdio
 * @c: the character params
 * Return: return a character
 */

int _putchar(char c)
{
return(write(1, &c, 1));
}
