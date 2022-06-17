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

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; a[b] != '\0'; b++)
		{
			if (s[a] == a[b])
			{
				s[a] = b[b];
				break;
			}
		}
	}
	return (s);
}
