#include <stdio.h>
#include "main.h"
/**
 * main -Entry point
 *
 * description - prints alphabets in low
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
