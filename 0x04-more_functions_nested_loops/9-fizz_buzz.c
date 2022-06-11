#include <stdio.h>
#include "main.h"
/**
 * fizz_buzz- print numbers between 1 and 100 and replace multiples
 * of 3  with fizz and multiples of 5 with buzz while multiples of
 * of 3 and 5 with fizzbuzz
 * Return: 0
 */
int fizzbuzz(void)
{
int i;
char f = "fizz";
char b = "buzz";
char fb = "fizzbuzz";
for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
printf("%s ",fb);
else if (i % 5 == 0)
printf("%s ",b);
else if (i % 3 == 0)
printf("%s ",f);
else
printf("%i ", i);
}
printf("\n");
return (0);
}
