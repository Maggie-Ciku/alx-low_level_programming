#include "main.h"
/**
 * _strlen_recursion - Starting point
 * Description: prints the length of a string
 * @s: string length
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
