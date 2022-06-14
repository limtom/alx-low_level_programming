#include "main.h"
#include <stdio.h>
/**
* print_array- prints n elements of an array of integers, followed by a new line.
* @a: The array parameter
* @n: The size of the array
* Return: Success 0
*/
void print_array(int *a, int n)
{
int i;
for(i = 0; i < n; i++)
{
printf("Array%s[%i] = %d\n", a, i, a[i] );
}
}
