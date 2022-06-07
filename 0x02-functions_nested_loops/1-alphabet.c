#include "main.h"
/**
 * main -  prints the alphabet, in lowercase, followed by a new line.
 *
 * Description: prints alphabets in lowercase
 *
 * Return: 0 (Success)
 */
void print_alphabet(void);
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
