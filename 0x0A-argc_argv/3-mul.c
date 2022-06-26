#include <stdio.h>
#include <stdlib.h>
/**
 *main- multiply two numbers
 *@argc: argument counts
 *@argv:argument vector
 *
 *Return: zero or success
 */

int main(int argc, char *argv[])
{
int i = 1;
if (argc < 3)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", atoi(argv[i]) * atoi(argv[i+1]));
}
return (0);
}
