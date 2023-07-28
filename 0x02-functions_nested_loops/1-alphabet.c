#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: NULL (success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
