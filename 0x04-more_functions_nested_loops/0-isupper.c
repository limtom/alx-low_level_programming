#include <ctype.h>
#include <stdio.h>

/**
 * _isupper - check for uppercase
 *Desc: chrck for upper
 * @c: integer variable
 * Return: returns an integer
 */
int _isupper(int c)
{
if (c > 64 && c < 91)
return (1);
else
return (0);
}
