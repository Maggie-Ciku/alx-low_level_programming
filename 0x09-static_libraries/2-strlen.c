#include <stdio.h>
#include "main.h"
/**
 * _strlen - Starting point
 * Description: function that returns the length of a string.
 * @s: value to be evaluated
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}
