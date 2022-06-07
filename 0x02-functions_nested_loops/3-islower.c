#include "main.h"
/**
 * _islower - Starting point
 *
 * Description: Checks for lowercase character.
 * @c: The character in ASCII code
 * Return: 1 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
