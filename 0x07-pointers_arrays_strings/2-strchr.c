#include "main.h"i
#include <stdio.h>
/**
 * *_strchr -  Starting point
 * Description:  locates a character in a string.
 * @s: the string
 * @c: the character
 * Return: a pointer to a character
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{

		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
