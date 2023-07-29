#include "main.h"
/**
 * print_sign -entry
 *
 * @n: prints whether zero + or -
 *
 * Return: 1 if + 0 if zero -1 if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+, ");
		return (1);
	}
	else if (n == 0)
	{
		printf("0, ");
		return (0);
	}
	else
	{
		printf("-, ");
		return (-1);
	}
}
