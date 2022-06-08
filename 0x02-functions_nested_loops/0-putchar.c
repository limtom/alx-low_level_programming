#include "main.h"
#include <stdio.h>

/**
 * Main: entry point
 *
 * Description: This program print _putchar
 *
 * Return: 0 success
 */

int main(void)
{
  int charArr[] = {95,112,117,116,99,104,97,114};
  int i = 0;
  while(i < 8){
    _putchar(charArr[i]);
    i++;
  }
  putchar(10);
  
  return 0;
}

