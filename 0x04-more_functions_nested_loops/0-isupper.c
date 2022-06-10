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
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}
