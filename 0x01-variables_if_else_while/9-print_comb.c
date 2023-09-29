#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int num;

	while (num <= 9) 
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}
