#include <stdio.h>
#include "main.h"
/**
 * print_line - Starting point
 * Description: draws a straight line in the terminal.
 *@n: integer n
 * Return: Always 0
 */
void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
