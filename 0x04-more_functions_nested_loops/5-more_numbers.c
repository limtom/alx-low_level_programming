#include "main.h"



/**

 * more_numbers - Print 0-14

 *

 * Return: Nothing

 */

void more_numbers(void)
  
{
  
  int n, t;
  

  
  t = 0;
  
  while (t < 10)
    
    {
      
      n = 0;
      
      while (n < 15)
	
	{
	  
	  if (n > 9)
	    
	    _putchar(n / 10 + '0');
	  
	  _putchar(n % 10 + '0');
	  
	  n++;
	  
	}
      
      _putchar('\n');
      
      t++;
      
    }
  
}
