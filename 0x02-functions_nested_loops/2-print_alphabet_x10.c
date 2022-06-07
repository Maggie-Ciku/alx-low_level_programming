#include "main.h"
/**
 * print_alphabet_x10 - Starting point
 *
 * Description: prints 10 times the alphabet, in lowercase
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void);
{
	int a;
	char ch;

	for (a = '0'; a <= '9'; a++)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	}
}
