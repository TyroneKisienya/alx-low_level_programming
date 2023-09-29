#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int num;
	int num1;
	
	for (num = 0; num < 10; num++)
	{
		for (num1 = num + 1; num1 < 10; num1++)
		{
			putchar(num + '0');
			putchar(num1 + '0');
			if (num < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
