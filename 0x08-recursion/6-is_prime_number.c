#include "main.h"

int chk_prime(int n, int i);

/**
  *is_prime_number - Returns if number is prime
  *@n: interger params
  *Return: integer value
  */
int is_prime_number(int n)
{
return (chk_prime(n, 1));
}

/**
  *chk_prime - Check if number is prime
  *@n: number to check
  *@i: iterator 
  *Return: 1 for prime or 0 for non prime
  */
int chk_prime(int n, int i)
{
if (n <= 1)
return (0);
if (n % i == 0 && i > 1)
return (0);
if ((n / i) < i)
return (1);
return (chk_prime(n, i + 1));
}
