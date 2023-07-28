#include "main.h"

/**
 * print_alphabet_x10 - entry
 *
 * Return: NULL (sucess)
 */
void print_alphabet_x10(void)
{
	int i;
	while (i < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
