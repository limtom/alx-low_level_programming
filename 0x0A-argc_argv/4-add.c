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
char *a;
if (argc < 2)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
a = argv[i];
for (j = 0; j < strlen(a); j++)
{
if (isdigit(a[j]) == 0)
{
printf("Error\n");
return (1);
}
res += atoi(a);
a++;
}
}
printf("%d\n", res);
}
return (0);
}
