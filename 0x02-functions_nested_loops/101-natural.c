#include <stdio.h>
#include <stdlib.h>
/**
 * main - Starting point
 * Description: Prints and computes sums of 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int a, b;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;
	}
	printf("%d\n", b);
	return (0);
}
