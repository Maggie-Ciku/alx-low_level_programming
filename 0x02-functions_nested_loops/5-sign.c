#include "main.h"
/**
 * int print_sign - Starting point
 *  @n: The character in ASCII code
 *  Description:  prints the sign of a number.
 *  Return: 1 (greater than zero) , 0 (is zero) or -1 (less than zero)
 */
int print_sign(int n);
{
	if (n > 0)
	{
		_putchar(43);
		_putchar('\n');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
			_putchar('\n');
			return (0);
	}
	else
	{
		_putchar(45);
		_putchar('\n');
		return (-1);
	}
}
