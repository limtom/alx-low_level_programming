#include "main.h"
/**
* swap_int- swap the value of two integer
* @a: first integer parameter
* @b: second integer parameter
* Return: Success 0
*/
void swap_int(int *a, int *b)
{
int temp = *b;
*b = *a;
*a = temp;
}
