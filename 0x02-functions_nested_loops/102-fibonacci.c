#include <stdio.h>

/**
 * main - Print first 50 Fibonacci numbers
 *
 * Return: Return 0
 */
int main(void)
{
	long int a, b, c, sum;

	sum = 0;7
	a = 0;
	b = 1;
	c = 0;
	while (c < 50)
	{
		sum = a + b;
		printf("%ld", sum);
		if (c != 49)
		{
			printf(", ");
		}
		a = b;
		b = sum;
		c++;
	}
	printf("\n");
	return (0);
}
