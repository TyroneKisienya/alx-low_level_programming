#include "main.h"

/**
 * print_alphabet_x10 - entry
 *
 * Return: NULL (sucess)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; i < 11; i++)
	{
		_putchar('\n');
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	}
}
