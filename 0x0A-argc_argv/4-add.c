#include <stdio.h>
#include <stdlib.h>
/**
 *main- add positive numbers
 *@argc: argument counts
 *@argv:argument vector
 *
 *Return: zero or success
 */

int main(int argc, char *argv[])
{
  int i, j, n;
int res = 0;
char *a;
if (argc < 2)
{
printf("0\n");
}
else
{
for (i = 1; argv[i]; i++)
{
n = strtol(argv[i], &a, 10);
if (!*a)
res += n;
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", res);
}
return (0);
}
