#include <stdio.h>

/**
 * Main - The main entry
 * Description: This program prints the alphabet in lowercase
 *
 * Return : Success
 */

int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
putchar("\n");
}
return (0);
}
