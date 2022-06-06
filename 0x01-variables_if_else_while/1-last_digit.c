#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Print statements based on the last digit of the random number.
 * Return: 0
 */
int main(void)
{
  int n;
  int last_digit;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  last_digit = n % 10;
  if(last_digit > 5){
      printf("Last digit of %i is %i and its greater than 5\n",n,last_digit);
  }
  else if(last_digit == 0){
    printf("Last digit of %i is %i and is 0",n, last_digit);
  }
  else
      printf("Last digit of n is less than 6 and not 0");
  return (0);
}
