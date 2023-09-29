#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	int num;
	int num1;

	for (num = 0; num < 100; num++) 
	{
		for (num1 = num + 1; num1 < 100; num1++) 
		{
			putchar(num / 10 + '0');
			putchar(num % 10 + '0');
			putchar(' ');
			putchar(num1 / 10 + '0');
			putchar(num1 % 10 + '0');
			if (!(num == 98 && num1 == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

