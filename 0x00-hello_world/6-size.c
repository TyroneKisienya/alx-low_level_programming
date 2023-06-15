#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: 0
 */

int main(void)

	{
		char c;
		int i;
		long l_i;
		long long ll_i;
		float j;

		printf("Size of a char: %d byte(s)\n", sizeof(c));
		printf("size of an int: %d byte(s)\n", sizeof(i));
		printf("Size of a long int: %d byte(s)\n", sizeof(l_i));
		printf("Size of a long long int: %d byte(s)\n", sizeof(ll_i));
		printf("Size of a float: %d byte(s)\n", sizeof(j));

		return (0);
