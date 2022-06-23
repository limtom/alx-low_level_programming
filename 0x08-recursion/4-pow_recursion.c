#include "main.h"

/**
 *_pow_recursion - oower of a number
 *@x: first int params
 *@y: second ibt params
 *Return: return the powervas integer
 */

int _pow_recursion(int x, int y)
{
if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}
