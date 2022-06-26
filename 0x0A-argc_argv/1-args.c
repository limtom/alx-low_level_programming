#include <stdio.h>
#include <string.h>
/**
 *main- print number of arguments
 *@argc: argument count
 *@argv: arguments vector
 *
 *Return: zero orsuccess
 */

int main(int argc, char *argv[])
{
int realarg = argc - 1;
(void) argc;
printf("%d\n", realarg);
return (0);
}
