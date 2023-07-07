#include "main.h"
#include <stdio.h>

/**
 * main - program name
 *
 * @argc: argument counter
 *
 * @argv: argument vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
