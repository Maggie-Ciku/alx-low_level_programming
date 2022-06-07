#include <stdio.h>
#include <main.h>
/**
 *_putchar - Prints _putchar
 *
 * main - Starting point
 *
 * Description -  prints '_putchar'
 *
 * Result: Always 0 (Success)
 */
char _putchar(void);
char _putchar(void)
{
	char ch = "_putchar";

	putchar(ch);
	putchar('\n');
	return (ch);
}
int main(void)
{
	putchar(_putchar());
	return (0);
}
