#include "main.h"
#include <stdlib.h>
/**
 * *create_array - Starting point
 * Description: creates an array of chars, and initializes it with a char
 * @size: size of the array
 * @c: char to be initialized
 * Return: pointer to array or null
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	a = 0;
	while (a < size)
	{
		str[a] = c;
		a++;
	}
	return (str);
}
