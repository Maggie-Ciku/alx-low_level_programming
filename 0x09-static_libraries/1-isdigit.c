#include <stdio.h>
#include "main.h"
/**
 *  _isdigit - Starting point
 *  Description: checks for a digit (0 through 9).
 *  @c: number
 *  Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
