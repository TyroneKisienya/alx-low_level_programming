#include "main.h"

/*
 * print_binary - bit rep
 *
 * @n: var
 *
 * Return: null
 */

void print_binary(unsigned long int n)
{
	unsigned long int m = 1;

	m <<= ((sizeof(m) * 8) - 1);
	if (n == 1)
	{
		_putchar(49);
		return;
	}
	if (n == 0)
	{
		_putchar(48);
		return;
	}
	while (m > 0)
	{
		if ((m & n) == 0)
			m = m >> 1;
		else
			break;
	}
	while (m > 0)
	{
		if ((m & n) == 0)
			_putchar(48);
		else
			_putchar(49);
		m = m >> m;
	}
}
