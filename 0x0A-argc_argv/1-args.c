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
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
