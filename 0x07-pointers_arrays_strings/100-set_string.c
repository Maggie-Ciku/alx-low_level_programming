#include <stdio.h>
#include "main.h"
/**
 * set_string - Starting point
 * Description: sets the value of a pointer to a char
 * @s: pointer to pointer
 * @to: string to set
 * Return: 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
