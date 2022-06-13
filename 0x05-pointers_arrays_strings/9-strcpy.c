#include <stdio.h>
#include "main.h"
/**
 * *_strcpy - Starting point
 * Description:  copies the string pointed to by src
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, a;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (a = 0; a < len; a++)
	{
		dest[a] = src[a];
	}

	dest[a] = '\0';

	return (dest);
}
