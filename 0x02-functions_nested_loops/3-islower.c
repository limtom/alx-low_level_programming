#include <ctype.h>
#include "main.h"
/**
 * _islower - return 1 if leter is lowercase and 0 if not
 * @c: character type letter
 * Return: return 0 if not lower case and 1 if lowercase
 */

int _islower(int c)
{
if (c >= 96 && c <= 123)
return (1);
else 
return (0);
}
