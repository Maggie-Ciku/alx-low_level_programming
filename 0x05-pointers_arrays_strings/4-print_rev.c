#include <stdio.h>
#include "main.h"
/**
 * print_rev - Starting point
 * Description:  prints a string, in reverse, followed by a new line
 * @s: string to be reversed
 * Return: not
 */
void print_rev(char *s)
{
	int a, b, len;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	len = a;

	for (b = len - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}

	_putchar('\n');
}
