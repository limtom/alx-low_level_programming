#include "main.h"
#include <stdio.h>
/**
 *main -  prints _putchar, followed by a new line.
 *
 *Description: don't use any of the standard library
 *
 *return 0
 */

int main(void)
{
int charArr[] = {95, 112, 117, 116, 99, 104, 97, 114};
int i = 0;
while (i < 8)
{
_putchar(charArr[i]);
i++;
}
putchar(10);  
return (0);
}
