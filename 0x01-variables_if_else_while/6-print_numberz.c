#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int num;

	do 
	{
		putchar(num + '0');
		num++;
	}
	while (num < 10);
	putchar('\n');
	return (0);
}
