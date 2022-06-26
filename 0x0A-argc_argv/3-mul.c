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
int res;
if (argc < 3)
{
printf("Error\n");
return (1);
}
else
{
res = atoi(argv[i]) * atoi(argv[i + 1]);
printf("%d\n", res);
}
return (0);
}
