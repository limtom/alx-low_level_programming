#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 *main- add positive numbers
 *@argc: argument counts
 *@argv:argument vector
 *
 *Return: zero or success
 */

int main(int argc, char *argv[])
{
int i, j;
int res = 0;
char *arg;
if (argc < 2)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
arg = argv[i];
for (j = 0; j < strlen(arg); j++)
{
if (isdigit(arg[j]) == 0)
{
printf("Error\n");
return (1);
}
res += atoi(arg);
 arg++;
}
}
printf("%d\n", res);
}
return (0);
}
