#include <stdio.h>

/**
 *main- print all arguments
 *@argc: argument counts
 *@argv: argument vector
 *
 *Return: zero or success
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
