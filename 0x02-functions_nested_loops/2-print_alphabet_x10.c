#include "main.h"

/**
 * print_alphabet_x10 - entry
 *
 * Return: NULL (sucess)
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++
	}
}
