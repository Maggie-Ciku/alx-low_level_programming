#include <stdio.h>
#include "main.h"
/**
 * swap_int - Starting point
 * Description: swaps the values of two integers
 * @a: pointer for first value
 * @b: pointer to second value
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
