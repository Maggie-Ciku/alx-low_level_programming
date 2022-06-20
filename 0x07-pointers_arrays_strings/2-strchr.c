#include "main.h"
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

	for (a = 0; s[a] != '\0' ; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (NULL);
}
