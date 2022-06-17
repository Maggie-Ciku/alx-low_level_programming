#include "main.h"
/**
 * *rot13 - Starting point
 * Description: encodes a string using rot13.
 * @s: string to be encoded
 * Return: string to be encoded
 */
char *rot13(char *s)
{
	int a, b;

	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; c[b] != '\0'; b++)
		{
			if (s[a] == c[b])
			{
				s[a] = d[b];
				break;
			}
		}
	}
	return (s);
}
