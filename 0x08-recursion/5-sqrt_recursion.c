#include "main.h"

/**
  *_sqrt_recursion - Returns square root of a number
  *@n:number params
  *Return:the natural square root
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  *_sqrt - Calculates square root
  *@n: number to calculate the square root
  *@i: iterator number
  *Return: the natural square root
  */
int _sqrt(int n, int i)
{
int sqrt = i * i;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (i);
return (_sqrt(n, i + 1));
}
