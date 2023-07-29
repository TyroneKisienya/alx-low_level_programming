#include "main.h"
/**
 * print_last_digit - entry
 *
 *@r: prints the last digit of the number
 *
 * Return: 0 (success)
 */
int print_last_digit(int r)
{
	int j;

	j = r % 10;
	if (j > 0)
	{
		_putchar(j + '0');
		return (j);
	}
	else
	{
		_putchar(-j + '0');
		return (-j);
	}
}
