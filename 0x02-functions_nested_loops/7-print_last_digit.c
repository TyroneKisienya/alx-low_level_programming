#include "main.h"
/**
 * print_last_digit - entry
 *
 *@i: prints the last digit of the number
 *
 * Return: 0 (success)
 */
int print_last_digit(int i)
{
	int j;

	j = i % 10;
	_putchar(j);
	return (0);
}
